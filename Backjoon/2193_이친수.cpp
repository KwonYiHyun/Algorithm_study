// 2023-01-17
// 백준 2193
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long arr[91][2] = {
        0,0
    };

    arr[1][1] = 1; // 1

    arr[2][0] = 1; // 10

    arr[3][1] = 1; // 101
    arr[3][0] = 1; // 100

    for (int i = 4; i <=90; i++)
    {
        arr[i][0] = arr[i - 1][0] + arr[i - 1][1];
        arr[i][1] = arr[i - 1][0];
    }

    cout << (arr[n][0] + arr[n][1]);
}