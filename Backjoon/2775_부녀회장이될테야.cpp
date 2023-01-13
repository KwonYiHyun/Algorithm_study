// 2023-01-13
// 백준 2775
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<pair<int, int>> v;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    int house[15][15] = {
        0,
    };

    for (int i = 0; i < 15; i++)
        house[0][i] = (i + 1);
    
    for (int i = 1; i < 15; i++)
        for (int j = 0; j < 15; j++)
            for (int k = 0; k <= j; k++)
                house[i][j] += house[i - 1][k];

    for (int i = 0; i < v.size(); i++)
        cout << house[v[i].first][v[i].second - 1] << endl;
}