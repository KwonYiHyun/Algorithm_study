// 2023-01-12
// 백준 1449
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int len = arr[n - 1];
    int *pipe = new int[len]();
    int *water = new int[len]();

    for (int i = 0; i < n; i++)
    {
        water[arr[i] - 1] = 1;
    }
    
    int result = 0;

    for (int i = 0; i < len; i++)
    {
        if (water[i] == 1 && pipe[i] == 0)
        {
            result++;
            for (int j = 0; j < l; j++)
            {
                pipe[i + j] = 1;
            }

        }
    }

    cout << result;
}