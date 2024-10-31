#include <iostream>
using namespace std;
int main() {
    int a[] = {2,3,5,6,7};
    int startIndex = 0;
    int endIndex = sizeof(a)/sizeof(a[0]) -1;
    for(int i=startIndex;i< (sizeof(a)/sizeof(a[0]))/2;i++) {
        swap(a[startIndex],a[endIndex]);
        startIndex++;
        endIndex--;
    }
    for(int i:a) cout << i << " ";
    return 0;
}