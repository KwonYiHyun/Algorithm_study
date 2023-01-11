// 2023-01-11
// 백준 1439
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string str;
    cin >> str;

    char *arr = new char[str.length() + 1];
    strcpy(arr, str.c_str());

    int cnt = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cnt++;
        }
    }

    if (cnt % 2 != 0)
    {
        cnt /= 2;
        cnt++;
    }else{
        cnt /= 2;
    }
    cout << cnt;
}