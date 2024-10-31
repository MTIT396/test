#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n = 5;
    int max = 0;
    int arr[] = {7,5,9,6,15};
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (i == j) continue;
            int subtract = abs(arr[j] - arr[i]);
            if(subtract > max) max = subtract;
        }
    }
    cout << max;
    return 0;   
}