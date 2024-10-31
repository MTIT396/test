#include <iostream>
#include <vector>
using namespace std;
#include <cmath>
int main() {
    int n = 5;
    int a[] = {2,5,2 ,5 ,6};
    int result = 0;
    for (int i = 1;i < n;i++) {
        int num = abs(a[i] - a[i-1]);
        if (result == 0 || num < result){
            result = num;
        }
    }
    int complement;
    vector<int>results;
    for (int i = 0;i < n-1;i++) {
        for (int j = i + 1;j < n;j++) {
            complement = abs(a[j] - a[i]);
            results.push_back(complement);
            break;
        }
    }
    int min = results[0];
    for(int item : results) {
        if(item < min) min = item;
    }
    cout << min;
    
}