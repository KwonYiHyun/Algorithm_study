// 2023-01-12
// 백준 1783
#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int result = 1;
    
    if (n == 1)
    {
        
    }
    else if (n == 2)
    {
        if (m == 1 || m == 2)
        {

        }
        else if (m == 3 || m == 4){
            result++;
        }
        else if (m == 5 || m == 6){
            result += 2;
        }
        else
        {
            result += 3;
        }
    }
    else if (n > 2)
    {
        if (m == 1)
        {

        }
        else if (m == 2)
        {
            result++;
        }
        else if (m == 3)
        {
            result += 2;
        }
        else if (m == 4 || m == 5)
        {
            result += 3;
        }
        else
        {
            result += (m - 3);
        }
    }

    cout << result;
}