#include <iostream>

namespace first{
    int x = 100;
}

namespace second{
    int x = 999;
}

int main()
{
    /* code */
    // int x = 123;
    // std::cout << x << "\n";
    std::cout << first::x << " from first namespace\n";

    using namespace second;
    std::cout << x << " from second namespace\n";
    return 0;
}
