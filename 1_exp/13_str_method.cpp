#include <iostream>

int main()
{
    /* code */
    std::string nama;
    std::cout << "Masukkan nama: ";
    std::getline(std::cin, nama);

    std::cout << nama.append("@gmail.com") << "\n";
    std::cout << nama.erase(5,7) << "\n"; // erase(start, end)
    std::cout << nama.insert(0, "#") << "\n"; // insert(index, value)
    std::cout << nama.find("#") << "\n";
    std::cout << nama.at(2) << "\n";
    std::cout << "Hallo " << nama << "!!!\n";
    nama.clear();
    std::cout << "Hallo " << nama << "!!!\n";


    return 0;
}
