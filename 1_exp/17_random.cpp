#include <iostream>

int main()
{
    /* code */
    srand(time(NULL));
    int max_num = 6;

    int num1 = rand() % max_num + 1; // add 1 for removing 0, jadi mirip kasus lempar dadu
    int num2 = rand() % max_num + 1; 
    int num3 = rand() % max_num + 1; 

    std::cout << "Lemparan pertama: " << num1 << "\n";
    std::cout << "Lemparan kedua: " << num2 << "\n";
    std::cout << "Lemparan ketiga: " << num3 << "\n";
    return 0;
}
