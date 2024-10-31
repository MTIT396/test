#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 4, 5, 8};
    //output: 8
    int max = a[0];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << max;

    return 0;
}