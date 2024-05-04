#include <iostream>
#include <cmath>

int main()
{
    /* code */
    int a = 3;
    int b = 7;
    int res;

    // res = std::min(a, b); // 3
    // res = std::max(a, b); // 3
    // res = sqrt(9); // 3
    // res = pow(2, 8); // 256
    res = abs(-129);
    
    std::cout << res << "\n";
    return 0;
}
