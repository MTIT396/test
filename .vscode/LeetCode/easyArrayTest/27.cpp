//Remove Elements
#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,2,1,3};
    int results[100]; 
    int remove = 1,n = 5,count = 0;
    for (int i = 0;i < n;i++) {
        if(arr[i] != 1) {
            results[count] = arr[i];
            count++;
        }
    }
    for (int i = 0;i < count;i++) {
        cout << results[i] << " ";
    }
    return 0;
}