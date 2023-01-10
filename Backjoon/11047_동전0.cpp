// 2023-01-10
// 백준 11047
#include <iostream>

using namespace std;

int main(){
    int cnt, money;
    int result = 0;
    cin >> cnt >> money;

    int *arr = new int[cnt];
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }

    for (int i = (cnt - 1); i >= 0; i--)
    {
        int temp = money / arr[i];
        money %= arr[i];
        result += temp;
    }

    cout << result << endl;
}