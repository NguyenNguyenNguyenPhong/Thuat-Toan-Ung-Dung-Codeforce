#include<iostream>
using namespace std;
// Nguyễn Minh Thương_TTUD

int main(){
    int n ;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    
    // Cách 1 O(n^3)
    // long max = arr[0];
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int result = 0;
    //         for(int k = i ; k <= j; k++){
    //             result += arr[k];
    //         }
    //         max = max < result ? result : max;
    //     }
    // }

    // cout << max;

    // Cách 2 O(n^2)

    // long max = arr[0];
    // for(int i = 0; i <n; i++){
    //     int result = 0;
    //     for(int j = i; j < n; j++){
    //         result += arr[j];
    //         max = max < result ? result : max;
    //     }
    // }
    // cout << max;

    // Cach 3 Quy hoach dong

    long max = arr[0];
    int* s = new int[n];
    s[0] = arr[0];
    max = s[0];
    for(int i = 1; i < n; i++){
        if(s[i-1] > 0) {s[i] = s[i-1] + arr[i];}
        else {s[i] = arr[i];}
        max = max < s[i] ? s[i] : max;
    }
    cout << max;
    return 0;
}