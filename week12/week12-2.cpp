//weeek12-2.cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n / 1000;       // 千位 (2^3 = 8)
    int b = (n / 100) % 10; // 百位 (2^2 = 4)
    int c = (n / 10) % 10;  // 十位 (2^1 = 2)
    int d = n % 10;         // 個位 (2^0 = 1)

    cout << a * 8 + b * 4 + c * 2 + d * 1 << "\n";
}
