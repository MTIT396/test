//Search Insert Position
//sorted array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = 4, target = 4;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            break;
        }
        else if (target < arr[i])
        {
            cout << i;
            break;
        }
        else if (target > arr[n - 1])
        {
            cout << n;
            break;
        }
    }
    return 0;
}