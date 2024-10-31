// Add to Array-Form of Integer
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int nums[] = {1, 2, 0, 0};
    int n = 4;
    int k = 34;
    vector<int> res;
    long long number = 0;
    for (int i = 0; i < n; i++)
    {
        number = number * 10 + nums[i];
    }
    long long resNum = number + k;
    while (resNum > 0)
    {
        res.push_back(resNum % 10);
        resNum/=10;
    }
    int startIndex = 0,endIndex = res.size()-1;
    for (int i = startIndex;i < res.size()/2;i++) {
        swap(res[startIndex],res[endIndex]);
        startIndex++;
        endIndex--;
    }
    for (int item : res) cout << item << " ";
    return 0;
}