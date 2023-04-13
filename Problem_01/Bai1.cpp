// Nguyen Minh Thuong Thuat Toan Ung Dung Problem 01
// Bai 1
#include <iostream>
using namespace std;

int main()
{

    unsigned long long a, b;
    cin >> a >> b;
    unsigned long long a0 = a / 10;
    int a1 = a % 10;
    unsigned long long b0 = b / 10;
    int b1 = b % 10;
    int c1 = (a1 + b1) % 10;
    int c0 = (a1 + b1) / 10;
    if ((a0 + b0 + c0) == 0)
    {
        cout << c1;
    }
    else
    {
        cout << a0 + b0 + c0 << c1 << endl;
    }
    return 0;
}