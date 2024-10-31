#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n = 806;
    //số lộc phát là số chỉ có 0 hoặc 6 hoặc 8
    int cnt = 0;
    vector<int>await;
    while (n > 0) {
        await.push_back(n%10);
        n/=10;
    }
    for (int i = 0;i < await.size();i++) {
        if(await[i] == 0 || await[i] == 6 || await[i] == 8) cnt++;
    }
    cout << (cnt == await.size() ? "LUCKY NUMBER" : "NO");

    return 0;
}