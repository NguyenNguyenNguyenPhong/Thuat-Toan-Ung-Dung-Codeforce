#include<iostream>
using namespace std;

const unsigned long long p =1000000000 + 7;

int mod(long long a){
    int value = a / p;
    int mod = a - p * value;
    return mod;
}
int main(){
    long long a , b;
    cin >> a >> b;
    a = mod(a);
    long long s = 1;
    for(int i = 1; i <= b; i++){
        s *= a;
        s = mod(s);
    }
    cout << s;
    return 0;
}