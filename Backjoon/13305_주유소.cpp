// 2023-01-11
// 백준 13305
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    int *dis = new int[cnt - 1];
    int *var = new int[cnt];

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < cnt - 1; i++)
    {
        cin >> dis[i];
    }

    for (int i = 0; i < cnt; i++)
    {
        cin >> var[i];
    }

    long long result = 0;
    int min = INT_MAX;

    for (int i = 0; i < cnt - 1; i++)
    {
        if (var[i] < min)
        {
            min = var[i];
        }
        result += (long long)min * dis[i];
    }

    cout << result;
}