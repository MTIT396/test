#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int a[] = {1, 2, 3, 4, 5, 9, 0, 6};
    int even[100], odd[100], evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0) continue;
        if (a[i] % 2 == 0)
        {
            even[evenCount] = a[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = a[i];
            oddCount++;
        }
    }
    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }
    return 0;
}