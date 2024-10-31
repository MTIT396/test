#include <iostream>
#include <vector>
using namespace std;
bool checkPalindrome(int n)
{
    int temp = n;
    int sum = 0;
    if (n <= 0)
        return false;
    else
    {
        while (n > 0)
        {
            sum = sum * 10 + n % 10;
            n /= 10;
        }
        if (sum == temp)
            return true;
        else
            return false;
    }
}
int main()
{
    int n ;
    cin >> n;
    if(checkPalindrome(n)) cout << "yes";
    else cout << "no";
    return 0;
}