// 2023-02-13
// 백준 1149
#include <iostream>

using namespace std;


int main(){
    int cnt;
    cin >> cnt;
    int **arr = new int *[cnt];

    for (int i = 0; i < cnt; i++)
    {
        arr[i] = new int[3];
    }

    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    for (int i = 1; i < cnt; i++)
    {
        arr[i][0] = min(arr[i][0] + arr[i - 1][1], arr[i][0] + arr[i - 1][2]);
        arr[i][1] = min(arr[i][1] + arr[i - 1][0], arr[i][1] + arr[i - 1][2]);
        arr[i][2] = min(arr[i][2] + arr[i - 1][0], arr[i][2] + arr[i - 1][1]);
    }

    int mi = min(arr[cnt - 1][0], arr[cnt - 1][1]);
    mi = min(mi, arr[cnt - 1][2]);

    cout << mi;
}