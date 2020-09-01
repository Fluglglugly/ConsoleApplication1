

#include <iostream>
#include <string>

int age = {};
int adult = 20;
std::string name;

int main()
{
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "OK "<<name<<", how old are you?\n";
    std::cin >> age;
    //std::cout << age;
    if (age >= adult)
    {
        std::cout << "WOW, you're getting old!";
    }
    else { std::cout << "HAHA, fkn zoomer!"; }

}

