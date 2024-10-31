#include<iostream>
using namespace std;
int main() {
    int n = 7;
    int a[] = {1,2,5,3,5,6,8};
    int count = 1,max = 0,end;


    for (int i = 1;i < n;i++) {
        if(a[i] > a[i-1]) {
            count++;
            if(count > max) {
                max = count;
                end = i;
            };
        }
        else {
            count = 1;
        }
    }
    for (int i = (end - max) + 1;i <= end;i++) {
        cout << a[i] << " ";
    }

    return 0;
}