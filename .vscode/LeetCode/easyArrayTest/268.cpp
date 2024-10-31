// Missing Numbers
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int item : arr)
        {
            if (i != item)
                count++;
        }
        if (count == n)
            cout << i;
    }
    return 0;
}