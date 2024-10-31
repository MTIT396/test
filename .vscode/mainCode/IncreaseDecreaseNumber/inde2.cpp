#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n = 1234;
    vector<int> await;
    int cnt = 0;
    while (n > 0)
    {
        await.push_back(n % 10);
        n /= 10;
    }
    
    for (int i = 1; i < await.size(); i++)
    {
        if (await[i] > await[i - 1])
        {
            cnt++;
        }
        else
            cnt--;
        // cnt += (await[i] > await[i-1] ? 1 : -1);
    }
    cout << (abs(cnt) == await.size() -1 ? "YES" : "NO");
    return 0;
}