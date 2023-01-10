// 2023-01-10
// 백준 1931
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin >> cnt;

    // int **arr = new int *[cnt];
    // for (int i = 0; i < cnt; i++)
    // {
    //     arr[i] = new int[2];
    // }

    // 2차원 형식을 사용하면서 정렬도 해야하므로 vector와 pair 사용
    vector<pair<int, int>> v;

    for (int i = 0; i < cnt; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(pair<int, int>(b, a));
    }

    sort(v.begin(), v.end());
    // 기본적으로 오름차순 후 reverse로 내림차순으로 만들수 있다
    // reverse(v.begin(), v.end());

    int result = 0;
    int n = 0;
    for (int j = 0; j < cnt; j++)
    {
        if(v[j].second>=n){
            result++;
            n = v[j].first;
        }
    }

    cout << result;
}