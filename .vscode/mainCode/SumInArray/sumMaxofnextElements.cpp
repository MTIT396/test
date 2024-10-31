#include <iostream>
using namespace std;
int main()
{
    // input: 6
    //  1 4 5 6 2 8
    // output: 13
    int n = 6;
    int k = 3;
    int a[] = {1, 4, 5, 6, 2, 8};
    
    int max = 0;
    int start;
    for (int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += a[i + j]; // hold and run
        }
        if (sum > max)
        {
            max = sum;
            start = i;
        }
    }
    cout << max << endl;
    for (int i = start;i < start + k;i++) {
        cout << i + 1 << " ";
    }
    return 0;
}