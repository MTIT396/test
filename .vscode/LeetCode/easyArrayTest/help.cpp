#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4};
    int n =4;
    int startIndex = 0,endIndex = n-1;
    for (int i = startIndex;i < n/2;i++) {
        swap(arr[startIndex],arr[endIndex]);
        startIndex++;
        endIndex--;
    }

    for (int item : arr) cout << item << " ";
    return 0;
}