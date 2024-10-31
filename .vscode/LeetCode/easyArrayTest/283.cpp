// Move Zeroes
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5, idx, countZeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            countZeroes++;
    }
    //stream breaking technique
    while (countZeroes > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                idx = i;
                for (int j = idx; j < n - 1; j++)
                {
                    swap(arr[j], arr[j + 1]);
                }
                break;
            }
        }

        countZeroes--;
    }
    for (int item : arr)
        cout << item << " ";
    return 0;
}