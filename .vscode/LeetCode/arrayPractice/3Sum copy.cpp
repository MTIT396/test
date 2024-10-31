#include <iostream>
#include <vector>
using namespace std;
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                swap(a[j], a[i]);
        }
    }
}
int main()
{
    int n = 6;
    int a[] = {-1,0,1,2,-1,-4};
    int target = 0;
    vector<int> res;
    sort(a, n);
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int total = a[i] + a[left] + a[right];
            if (total == target)
            {
                res.push_back(a[i]);
                res.push_back(a[left]);
                res.push_back(a[right]);
                left++;
                right--;
            }
        }
    }
    for (int item : res)
        cout << item << " ";
    return 0;
}