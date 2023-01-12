// 2023-01-12
// 백준 11000
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n;
    vector<pair<int, int>> v;

    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    sort(v.begin(), v.end());
    
    int result = 0;
    
    pq.push(v[0].second);
    for (int i = 1; i < n; i++)
    {
        pq.push(v[i].second);
        if (pq.top() > v[i].first)
        {
            
        }else{
            pq.pop();
        }
    }

    result = pq.size();

    cout << result;
}