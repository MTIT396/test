#include <iostream>
using namespace std;
int recursive(int n, int k)
{
    if (n == 0)
        return k;
    return recursive(n / 10, k * 10 + n % 10);
}
int main()
{
    int n;
    cin >> n;
    // cout << recursive(n,0);
    int reversedNum = 0;

    while (n > 0)
    {
        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }
    
    cout << reversedNum;

    return 0;
}