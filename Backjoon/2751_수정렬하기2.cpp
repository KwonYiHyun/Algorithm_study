// 2023-01-10
// 백준 2751
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin >> cnt;

    int *arr = new int[cnt];
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }
    
    /* 속도 제한 이슈
    for (int i = 0; i < cnt; i++)
    {
        int min = INT_MAX;
        int index;
        for (int j = i; j < cnt; j++)
        {
            if(arr[j]<min){
                min = arr[j];
                index = j;
            }
        }

        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    */

    sort(arr, arr + cnt);

    for (int i = 0; i < cnt; i++)
    {
        cout << arr[i] << "\n";
    }
    
}