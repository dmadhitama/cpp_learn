#include <iostream>

int main(){
    int angka;
    
    do {
        std::cout << "Masukkan angka positif: ";
        std::cin >> angka;
    } while (angka < 0);

    std::cout << "Angka yang anda masukkan adalah " << angka << std::endl;
    
}