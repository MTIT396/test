// Majority Elements
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;
    int res;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
        {
            cout << arr[i] << " ";
            break;
        };
    }

    return 0;
}