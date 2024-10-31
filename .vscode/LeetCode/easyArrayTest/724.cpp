// The Pivot Index
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            leftSum += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            rightSum += arr[k];
        }
        if (leftSum == rightSum)
        {
            cout << i;
            break;
        }
    }

    return 0;
}