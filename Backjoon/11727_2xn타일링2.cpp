// 2023-01-17
// 백준 11727
#include <iostream>

using namespace std;

int arr[1001] = {
    0,
};

int dp(int a);

int main(){
    int n;
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 3;

    dp(n);

    cout << arr[n];
}

int dp(int a){
    if (a < 0)
        return 0;

    if (arr[a] != 0)
        return arr[a];

    return arr[a] = (dp(a - 1) + dp(a - 2) * 2) % 10007;
}