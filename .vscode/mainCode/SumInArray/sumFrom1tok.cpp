#include<iostream>
using namespace std;
int main() {
    //input: 6
    //output: 2
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1;i < n;i++) {
        sum += i;
        if(sum >= n) {
            cout << i-1 ;
            break;
        }
    }
    return 0;
}