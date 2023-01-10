// 2023-01-10
// 백준 1541
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    vector<int> v;
    string str, token, token2;
    cin >> str;

    istringstream iss(str);
    while (getline(iss, token, '-'))
    {
        int sum = 0;

        istringstream iss2(token);
        while (getline(iss2, token2, '+'))
        {
            sum += stoi(token2);
        }
        

        v.push_back(sum);
    }

    int result = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        result -= v[i];
    }

    cout << result;
}