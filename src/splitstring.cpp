#include <iterator>
#include <regex>
#include <iostream>
#include <string>


int main()
{
    const std::string text = "Quick,brown,fox.aa";
    const std::regex ws_re("\,+"); // 空白符
    //std::copy(std::sregex_token_iterator(text.begin(), text.end(), ws_re, -1),
    //    std::sregex_token_iterator(),
    //    std::ostream_iterator<std::string>(std::cout, "\n"));
    auto iter = std::sregex_token_iterator(text.begin(), text.end(), ws_re, -1);
        //    std::sregex_token_iterator(),
        //    std::ostream_iterator<std::string>(std::cout, "\n"));
    decltype(iter) end;
    for (; iter != end; iter++) {
        std::cout << iter->str() << std::endl;
    }

    const std::regex ws_re1("[\,.]+");
    auto end1 = std::sregex_token_iterator();
    auto iter1 = std::sregex_token_iterator(text.begin(), text.end(), ws_re1, -1);
    for (; iter1 != end1; iter1++) {
        std::cout << iter1->str() << std::endl;
    }
    return 0;
}