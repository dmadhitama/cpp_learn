#include <iostream>

/* 
untuk define function umumnya kita bikin sebelum fungsi main
tapi kita bisa aja bikin setelah fungsi main
tapi terlebih dulu kita deklarasi fungsi tersebut sebelum fungsi main
*/
void fungsi1(std::string nama, int umur);
int main()
{
    /* code */
    std::string name;
    int age;
    std::cout << "Masukkan nama: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Masukkan umur: ";
    std::cin >> age;
    fungsi1(name, age);
    return 0;
}

void fungsi1(std::string nama, int umur){
    std::cout << "Halo bapak/ibu " << nama << std::endl;
    std::cout << "Anda berumur " << umur << " tahun" << std::endl;
}
