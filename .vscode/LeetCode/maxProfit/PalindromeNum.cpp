#include <iostream>
#include <vector>
using namespace std;
bool checkPalindrome(int n)
{
    vector<int> await;
    vector<int> res;
    if(n < 0) return false;
    while (n > 0)
    {
        await.push_back(n % 10);
        n /= 10;
    }
    int startIndex = 0;
    int endIndex = await.size() - 1;
    for (int i = startIndex; i < await.size() / 2; i++)
    {
        if (await[startIndex] == await[endIndex])
            res.push_back(i);
        startIndex++;
        endIndex--;
    }
    if (res.size() == await.size() / 2)
        return true;
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << checkPalindrome(n);
    return 0;
}