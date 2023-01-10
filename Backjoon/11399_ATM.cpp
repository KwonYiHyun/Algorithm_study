// 2023-01-10
// 백준 11399
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;

    int *arr = new int[cnt];
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + cnt);

    int result = 0;
    for (int i = 1; i <= cnt; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += arr[j];
        }
        result += sum;
    }

    cout << result;
}