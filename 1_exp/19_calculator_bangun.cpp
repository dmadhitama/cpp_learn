#include <iostream>

double persegi(double side){
    return side * side;
}

double persegi_panjang(double side1, double side2){
    return side1 * side2;
}

int main()
{
    /* code */
    int kode_bangun;
    double hasil;
    std::cout << "Masukkan kode bangun (1: Persegi, 2: Persegi Panjang): ";
    std::cin >> kode_bangun;
    switch (kode_bangun)
    {
    case 1:
        double sisi;
        std::cout << "Calculator Persegi" << std::endl;
        std::cout << "Masukkan sisi: ";
        std::cin >> sisi;
        hasil = persegi(sisi);
        std::cout << "Luas persegi: " << hasil << "cm^2\n";
        break;
    case 2:
        double sisi_1, sisi_2;
        std::cout << "Calculator Persegi Panjang" << std::endl;
        std::cout << "Masukkan sisi 1: ";
        std::cin >> sisi_1;
        std::cout << "Masukkan sisi 2: ";
        std::cin >> sisi_2;
        hasil = persegi_panjang(sisi_1, sisi_2);
        std::cout << "Luas persegi panjang: " << hasil << "cm^2\n";
        break;    
    default:
        std::cout << "Masukkan kode bangun yang benar (1 atau 2)!!" << std::endl;
        break;
    }
    return 0;
}
