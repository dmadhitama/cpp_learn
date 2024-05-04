#include <iostream>

int main()
{
    /* code */
    int age;

    std::cout << "Masukkan umur: ";
    std::cin >> age;

    if (age >= 18 and age < 60)
    {
        std::cout << "Welcome!!\n";
    }
    else if (age < 0)
    {
        std::cout << "Durung lahir ya?\n";
    }
    else if (age < 18)
    {
        std::cout << "Gak oleh mlebu rek!\n";
    }
    else
    {
        std::cout << "Awakmu ketuaan!\n";
    }
    
    
    return 0;
}
