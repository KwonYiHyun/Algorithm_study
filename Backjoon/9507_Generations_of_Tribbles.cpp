// 2023-01-18
// 백준 9507
#include <iostream>

using namespace std;

long long dp(int a);

long long arr[70] = {
    0,
};

int main(){
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    int n;
    cin >> n;
    int *cn = new int[n];
    for (int i = 0; i < n; i++)
        cin >> cn[i];
    
    for (int i = 0; i < n; i++)
        cout << dp(cn[i]) << endl;
}

long long dp(int a){
    if (a < 0)
        return 0;

    if (arr[a] != 0)
        return arr[a];
        
    return arr[a] = dp(a - 1) + dp(a - 2) + dp(a - 3) + dp(a - 4);
}