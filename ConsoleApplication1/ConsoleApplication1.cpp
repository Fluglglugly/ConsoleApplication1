

#include <iostream>
#include <string>

int age = {};
int adult = 20;

int main()
{

    std::cout << "How old are you?\n";
    std::cin >> age;
    //std::cout << age;
    if (age >= adult)
    {
        std::cout << "WOW, you're getting old!";
    }
    else { std::cout << "HAHA, fkn zoomer!"; }

}

