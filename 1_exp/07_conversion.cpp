#include <iostream>

int main()
{
    /* code */
    double x = (int) 3.14;
    std::cout << x << std::endl;

    int a = 2;
    int b = 10;
    double hasil_tanpa_conversion = a/b;
    double hasil_dengan_conversion = a/(double)b;
    std::cout << hasil_tanpa_conversion << "\n" << hasil_dengan_conversion << "\n";

    
    return 0;
}
