#include<iostream>
using namespace std;

const unsigned long long p = 1000000000 + 7;
int mod(long long a){
    int value = a / p;
    int mod = a - value * p;
    return mod;
}

int main(){
    long long a, b;
    cin >> a >> b;

    a = mod(a);
    b = mod(b);

    cout << mod(a + b) << endl;

}