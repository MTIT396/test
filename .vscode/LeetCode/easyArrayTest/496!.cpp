#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums1[] = {4,1,2};
    int nums2[] = {1,2,3,4};
    int n1 = 3, n2 = 4, temp;
    vector<int> res;
    vector<int> boxIndex;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (nums1[i] == nums2[j])
            {
                boxIndex.push_back(j);
            }
        }
    }
    for (int item : boxIndex)
    {
        if (item == n2 - 1)
        {
            res.push_back(-1);
        }
        else if (nums2[item + 1] > nums2[item])
        {
            res.push_back(nums2[item + 1]);
        }
        
    }

    for (int item : res) cout << item << " ";
    return 0;
}