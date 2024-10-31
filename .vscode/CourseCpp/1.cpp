#include<iostream>
using namespace std;
// #define ll long long
#define square(n) n*n 
typedef long long ll;
const float pi = 3.14;
#include<cmath>
int main() {
    freopen("test.inp" , "r" , stdin);
    freopen("test.out" , "w" , stdout);
    // ll n = 4,m = 2;
    // cout << square(n) << endl;
    // cout << pow(n,m) << endl;
    // cout << max(n,m) << endl;
    int n,m,p;
    cin >> n >> m >> p;
    cout << n << " " << m ;
    cout << endl;
    cout << max(max(n,m),p);
    int temp = max(m,n);
    cout << endl;
    cout << max(temp,p);
    return 0;
}