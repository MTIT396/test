#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int dq(int n) {
    if(n < 1) return 0;
    return factorial(n%10) + dq(n/10);
}
int main()
{
    int n = 145;
    int temp = n;
    // 145 = 1! + 4! + 5!
    int sum = 0;
    while (n > 0)
    {
        sum += factorial(n % 10);
        n /= 10;
    }
    // cout << dq(n) << endl;
    cout << (sum == temp ? "YES" : "NO");

    return 0;
}