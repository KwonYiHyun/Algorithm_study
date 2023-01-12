// 2023-01-12
// 백준 11000
// 미해결
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(){
    int n;
    vector<pair<int, int>> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    sort(v.begin(), v.end(), comp);

    cout << "-----------" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " / " << v[i].second << endl;
    }
    cout << "-----------" << endl;
    

    int result = 0;
    
    // priority_queue를 사용하지않고 v를 한번만 조회하여
    // 푸는 방식이 있다고 한다.
    while (!v.empty())
    {
        int a = 0;
        
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first >= a)
            {
                a = v[i].second;
                v.erase(v.begin() + i);
                i--;
            }
        }
        result++;
    }
    
    cout << result;
}