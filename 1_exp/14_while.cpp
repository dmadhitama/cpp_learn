#include <iostream>

int main()
{
    /* code */
    std::string nama;

    while (nama.empty())
    {
        /* code */
        std::cout << "Masukkan nama: ";
        std::getline(std::cin, nama);
    }
    std::cout << "Halo " << nama << "\n";
    
    return 0;
}
