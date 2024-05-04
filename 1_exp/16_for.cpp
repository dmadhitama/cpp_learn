#include <iostream>

int main()
{
    /* code */
    int angka = 3;
    int count = 10;
    std::cout << "Angka awal: " << angka << std::endl;

    for (int i = 0; i <= count; i++)
    {
        /* code */
        std::cout << "Angka " << angka << " dikalikan dengan angka " << i << " adalah: " << angka*i << std::endl; 
    }
    
    return 0;
}
