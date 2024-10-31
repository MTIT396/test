#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int a[] = {1, 3, 5, 2, 8};
    // output: 4 7
    // solution 1
    for (int i = 0; i < n - 2; i += 2)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int sum = 0;
            sum += a[i] + a[j];
            cout << sum << " ";
            break;
        }
    }
    //solution 2
    for(int i = 0;i < n - 1;i+=2) {
        int sum = 0;
        sum += a[i] + a[i+1];
        cout << sum << " ";
    }
    return 0;
}