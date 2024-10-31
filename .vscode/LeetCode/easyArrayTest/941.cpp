//Valid Mountain Array
#include <iostream>
using namespace std;
bool validMountainArray(int arr[], int n)
{
    int temp, count = 0, subCount = 0, check = 0;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            temp = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
            check++;
    }
    if (check > 1 || max == arr[n - 1] || max == arr[0])
        return false;
    else
    {
        if (n >= 3)
        {
            for (int i = 0; i < temp; i++)
            {
                if (arr[i] < arr[i + 1])
                    count++;
            }
            for (int i = n - 1; i > temp; i--)
            {
                if (arr[i] < arr[i - 1])
                    subCount++;
            }
        }
        else
            return false;
    }

    if (count == temp && subCount == n - temp - 1)
        return true;
    else
        return false;
}
int main()
{
    int arr[] = {1, 4, 5, 9, 2, 0};
    int n = 6;
    return 0;
}