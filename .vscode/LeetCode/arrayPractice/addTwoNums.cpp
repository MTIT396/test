#include <iostream>
#include <vector>
using namespace std;
int reversed(int a[],int n) {
    int reverse = 0;
    for (int i = n-1;i >= 0;i--) {
        reverse = reverse * 10 + a[i];
    }
    return reverse;
}
int main()
{
    int n = 3;
    int a1[] = {2, 4, 3};
    int a2[] = {5, 6, 4};
    //output: 7 0 8
    //explanation: 342 + 465 = 807
    int result = reversed(a1,3) + reversed(a2,3);
    vector<int> answer;
    while (result > 0) {
        int position = result % 10;
        answer.push_back(position);
        result/=10;
    }
    for (int i : answer) cout << i << " ";
    return 0;
}