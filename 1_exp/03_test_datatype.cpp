#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a = 10;

    cout << a << endl;
    cout << sizeof(a) << " bytes" << endl;
    cout << "Min: " << numeric_limits<int>::min() << endl;
    cout << "Max: " << numeric_limits<int>::max() << endl;
    return 0;
}
