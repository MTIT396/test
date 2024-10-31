#include <iostream>
#include<cmath>

using namespace std;
int main() {
    int n = 5;
    int a[] = {2,8,6,1,9};
    int distance,min = 0;
    for (int i = 1;i < n;i++) {
        distance = abs(a[i] - a[i-1]);
        if(min == 0 || distance < min) {
            min = distance;
        }
    }
    cout << min;
    return 0;
}