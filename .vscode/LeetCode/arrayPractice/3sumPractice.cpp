#include <iostream>
using namespace std;
#include <vector>
void sort(int a[],int n) {
    for (int i = 0;i < n - 1;i++) {
        for (int j = i + 1;j < n;j++) {
            if(a[j] < a[i]) swap(a[j],a[i]);
        }
    }
}
int main()
{
    int n = 5;
    int nums[] = {1, 0, -2, -1, 2};
    int target = 1;
    vector<int> res;
    sort(nums,n);
    for (int i = 0; i < n - 2; i++)
    {
        int leftPointer = i + 1;
        int rightPointer = n - 1;
        while (leftPointer < rightPointer)
        {
            int sum = nums[i] + nums[leftPointer] + nums[rightPointer];
            if (sum == target)
            {
                res.push_back(nums[i]);
                res.push_back(nums[leftPointer]);
                res.push_back(nums[rightPointer]);
                leftPointer++;
            }
            else if(sum < target) leftPointer++;
            else rightPointer--;
        }
    }
    for (int i : res) cout << i << " ";
    return 0;
}