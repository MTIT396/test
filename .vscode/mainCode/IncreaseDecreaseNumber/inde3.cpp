#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 1234;
    int count = 0;
    vector<int> await;
    while (n > 0)
    {
        await.push_back(n % 10);
        n /= 10;
        if (await.size() > 1)
        {
            if (await[await.size() - 1] > await[await.size() - 2])
            {
                count++;
            }
            else
                count--;
            //shortcode
            // count += (await[await.size() -1 ] > await[await.size() -2] ? 1 : -1);
        }
    }
    cout << (abs(count) == await.size() - 1 ? "YES" : "NO");

    return 0;
}