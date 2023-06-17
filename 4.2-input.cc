#include<iostream>
#include<string>

int main() {
    std::string str;
    int num;

    //std::cout << "Enter a character: ";
    //char c = getchar();
    //std::cout << "The character from keyboard is: " << c << std::endl;

    std::cout << "Enter a line: ";
    getline(std::cin, str);
    std::cout << "The string is: " << str << std::endl;

    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The number is " << num << std::endl;
}