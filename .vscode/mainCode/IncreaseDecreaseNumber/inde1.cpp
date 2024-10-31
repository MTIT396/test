#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n = 981;
    //số tăng giảm (là số tăng hoặc giảm từ trái sang phải)
    vector<int> await;
    int cntUp = 1,cntDown = 1;
    while (n > 0) {
        await.push_back(n%10);
        n/=10;
    }
    for (int i = 1;i < await.size();i++) {
        if(await[i] > await[i-1]) cntUp++;
        else cntDown++;
    }
    if (cntUp == await.size() || cntDown == await.size()) cout << "YES";
    else cout << "NO" ;
    
    return 0;
}