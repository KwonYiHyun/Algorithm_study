// 2023-01-13
// 백준 11726
#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001] = {
    0,
};

int dp(int a);

int main(){
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 2;

    dp(n);

    cout << arr[n];
}

int dp(int a){
    if(a<0)
        return 0;

    if (arr[a] != 0)
        return arr[a];

    return arr[a] = (dp(a - 1) + dp(a - 2)) % 10007;
}