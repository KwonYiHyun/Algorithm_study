// 2023-01-18
// 백준 2491
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int **arr = new int *[n];
    int *cn = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2]{
            1, 1};
    }
    
    for (int i = 0; i < n; i++)
        cin >> cn[i];

    for (int i = 1; i < n; i++)
    {
        if (cn[i] > cn[i - 1])
        {
            arr[i][0] = 1;
            arr[i][1] = arr[i - 1][1] + 1;
        }
        else if (cn[i] < cn[i - 1]){
            arr[i][0] = arr[i - 1][0] + 1;
            arr[i][1] = 1;
        }else{
            arr[i][0] = arr[i - 1][0] + 1;
            arr[i][1] = arr[i - 1][1] + 1;
        }
    }

    int result = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (result < arr[i][0])
            result = arr[i][0];

        if (result < arr[i][1])
            result = arr[i][1];
    }

    cout << result;
}