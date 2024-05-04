#include <iostream>

// ternary adalah pengganti if-else statement, one-liner if-else
// usage:
// condition ? expression kalo true : expression kalo false
int main()
{
    /* code */
    int angka;
    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    angka%2 == 0 ? std::cout << "Angka genap!\n" : std::cout << "Angka ganjil!\n";
    
    
    return 0;
}
