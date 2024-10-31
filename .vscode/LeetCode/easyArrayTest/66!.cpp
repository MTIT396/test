//Plus One
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {9, 0, 9, 9};
    int n = 4;
    long long sum = 0;

    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + arr[i];
    }
    long long resNum = sum + 1;

    while (resNum > 0)
    {
        res.push_back(resNum % 10);
        resNum /= 10;
    }
    int startIndex = 0, endIndex = res.size() - 1;
    for (int i = startIndex; i < res.size() / 2; i++)
    {
        swap(res[startIndex], res[endIndex]);
        startIndex++;
        endIndex--;
    }

    // OutOfMemory

    // if (n > 1)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (i == n - 1)
    //         {
    //             res.push_back(arr[i] + 1);
    //             break;
    //         }
    //         res.push_back(arr[i]);
    //     }
    // }
    // else
    // {
    //     int resNum = arr[0] + 1;
    //     while (resNum > 0)
    //     {
    //         res.push_back(resNum % 10);
    //         resNum /= 10;
    //     }
    //     int startIndex = 0, endIndex = res.size() - 1;
    //     for (int i = startIndex; i < res.size() / 2; i++)
    //     {
    //         swap(res[startIndex], res[endIndex]);
    //         startIndex++;
    //         endIndex--;
    //     }
    // }
    for (int i : res)
        cout << i << " ";

    return 0;
}