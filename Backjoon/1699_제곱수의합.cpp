// 2023-01-17
// 백준 1699
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *arr = new int[n + 1];

    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;

        for (int j = 1; j * j <= i; j++)
        {
            arr[i] = min(arr[i], arr[i - j * j] + 1);
        }
        
    }

    cout << arr[n];
}