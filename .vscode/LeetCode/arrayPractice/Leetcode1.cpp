#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int nums[] = {1, 3, 4, 6};
    //output: 1 4 8 14
    // main solution
    int results[n];
    results[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        results[i] = nums[i] + results[i - 1]; // truy hồi về biến chứa trc đó
    }
    for (int i : results)
        cout << i << " ";
    //another solutions

    // for (int i = 1; i < n; i++)
    // {
    //     nums[i] += nums[i - 1];
    // }
    // for (int i : nums)
    //     cout << i << " ";

    // //another solutions

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j >= 0; j--)
    //     {
    //         sum += nums[j];
    //     }
    //     cout << sum << " ";
    // }

    // another solutions

    // int sum = 0;
    // for (int i = 0;i < n;i++) {
    //     sum += nums[i];
    //     cout << sum << " ";
    // }
    return 0;
}