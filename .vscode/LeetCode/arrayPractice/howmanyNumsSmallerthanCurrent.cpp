#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int n = 5;
    int nums[] = {8, 1, 2, 2, 3};
    //[4, 0, 1, 1, 3]
    int cnt = 0;
    vector <int> results;
    for (int i = 0;i < n;i++) {
        int cnt = 0;
        for (int j = 0;j < n;j++) {
            // if(i == j) continue;
            if(nums[j] < nums[i]) cnt++;
        }
        results.push_back(cnt);
    }
    for (int item : results) cout << item << " "; 
    return 0;
}