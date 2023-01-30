// 2023-01-30
// 백준 9461
#include <iostream>

using namespace std;

long dp(int n);

long p[101] = {
    0,
};

int main(){
    int c, n;
    cin >> c;

    long *t = new long[c];

    p[1] = 1;
    p[2] = 1;
    p[3] = 1;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        dp(n);
        t[i] = p[n];
    }

    for (int i = 0; i < c; i++)
        cout << t[i] << "\n";
    
}

long dp(int n){
    if (n < 0)
        return 0;

    if (p[n] != 0)
        return p[n];

    return p[n] = dp(n - 2) + dp(n - 3);
}