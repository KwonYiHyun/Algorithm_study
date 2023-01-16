// 2023-01-16
// 백준 1912
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    int *result = new int[n]();

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    result[0] = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= result[i - 1] + arr[i])
            result[i] = result[i - 1] + arr[i];
        else
            result[i] = arr[i];

        if (min < result[i])
            min = result[i];
    }

    cout << min;
}