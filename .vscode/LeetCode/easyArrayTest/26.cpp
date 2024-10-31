// Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5};
    int n = 12;
    int results[100];
    results[0] = arr[0];
    // vector<int> res;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            // res.push_back(arr[i]);
            results[count] = arr[i];
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << results[i] << " ";
    }
    // cout << res.size();

    return 0;
}