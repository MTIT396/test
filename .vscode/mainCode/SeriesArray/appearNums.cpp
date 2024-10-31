#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 8;
    int a[] = {4, 4, 3, 1, 4, 4, 6, 1};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
    vector<int> await;
    await.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            await.push_back(a[i]);
        }
    }
    for (int i = 0;i < await.size();i++)
        cout << await[i] << " ";
    return 0;
}