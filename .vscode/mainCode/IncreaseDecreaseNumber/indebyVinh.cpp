#include<iostream>

using namespace std;

bool Recursive(int n, int dv, bool isDecreaseFromRightToLeft){
    if (n == 0)
       return true;
    if (dv > -1){
        if (isDecreaseFromRightToLeft){
           if (dv < n % 10)
               return false;
        } else if (dv > n % 10){
           return false;
        }
    }
           
    return Recursive(n/10, n%10, isDecreaseFromRightToLeft);
}
int main()
{
    int n = 97023;
    bool result = Recursive(n, -1, n % 10 > (n % 100) / 10);
    cout << (result ? "OK" : "NO");
    
}