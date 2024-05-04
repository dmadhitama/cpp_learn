#include <iostream>

int main()
{
    /* code */
    int age;
    std::cout << "What is ur age? ";
    std::cin >> age; // problem kalo setelah cin terus diikuti std::getline adalah once input dimasukkan, akan ada enter "\n" yang tertangkap oleh std::getline
    std::cout << "You are " << age << " yrs old\n";

    // supaya menghindari itu maka kita ubah std::getline supaya mencegah any whitespace yang masuk di cin di atas
    // before: std::getline(std::cin, name);
    // after: std::getline(std::cin >> std::ws, name);
    std::cout << "What's ur full name? ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << "\n";
    return 0;
}
