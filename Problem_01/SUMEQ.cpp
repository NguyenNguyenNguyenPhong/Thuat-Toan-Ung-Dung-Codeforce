#include<iostream>
using namespace std;

const unsigned long long p = 1000000000 + 7;
int mod(long long a){
    int value = a / p;
    int mod = a - value * p;
    return mod;
}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    long long sum = 0;
    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        sum= mod(sum);
    }    

    cout << sum;
    return 0;
}