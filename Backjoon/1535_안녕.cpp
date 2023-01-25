// 2023-01-19
// 백준 1535
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *L = new int[n+1]();
    int *J = new int[n+1]();
    int arr[21][101] = {
        0, 0
    };

    for (int i = 1; i <= n; i++)
        cin >> L[i];

    for (int i = 1; i <= n; i++)
        cin >> J[i];

    int result = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (L[i] + j < 100)
                arr[i][j] = max(arr[i - 1][j], arr[i - 1][j + L[i]] + J[i]);
            else
                arr[i][j] = max(arr[i - 1][j], arr[i][j]);

            if (result < arr[i][j])
                result = arr[i][j];
        }
    }

    cout << result;
}