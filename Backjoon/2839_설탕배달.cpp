// 2023-01-13
// 백준 2839
#include <iostream>
#include <algorithm>

using namespace std;

int arr[5001] = {
    0,
};

int dp(int a);

int main(){
    int n;
    cin >> n;

    arr[3] = 1;
    arr[5] = 1;

    dp(n);

    if (arr[n] >= 10000000)
        cout << "-1";
    else
        cout << arr[n];
}

int dp(int a){
    if (a < 0)
        return 10000000;

    if (arr[a] != 0)
        return arr[a];
    else
        return arr[a] = min(dp(a - 3), dp(a - 5)) + 1;
}