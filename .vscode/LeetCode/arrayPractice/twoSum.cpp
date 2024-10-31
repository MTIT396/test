#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 4;
    int nums[] = {2,7,11,15};
    int target = 9;
    vector<int> results;
    for (int i = 0; i < n; i++)
    {
        bool requireBreak = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (nums[i] + nums[j] == target)
            {
                results.push_back(i);
                results.push_back(j);
                requireBreak = true;
                break;
            }
        }
        if (requireBreak)
            break;
    }
    for (int i : results) cout << i << " ";
    return 0;
}