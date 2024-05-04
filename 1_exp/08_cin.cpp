#include <iostream>

int main()
{
    /* code */
    std::cout << "What's ur full name? ";
    // std::cin >> name; // jika ada input string dengan spasi, maka setelah spasi tidak akan dibaca cin, maka...
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "\n";

    int age;
    std::cout << "What is ur age? ";
    std::cin >> age;
    std::cout << "You are " << age << " yrs old\n";
    return 0;
}
