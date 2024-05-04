#include <iostream>

int main()
{
    /* code */
    int angka;
    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    switch (angka)
    {
    case 1:
        std::cout << "Ini angka satu!";
        break;
    case 2:
        std::cout << "Ini angka dua!";
        break;
    case 3:
        std::cout << "Ini angka tiga!";
        break;    
    default:
        std::cout << "Masukkan angka 1-3!!";
        break;
    }
    return 0;
}
