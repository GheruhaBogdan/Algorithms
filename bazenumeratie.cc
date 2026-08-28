#include <iostream>
using namespace std;

int main()
{
    int n, b;
    cin >> b >> n;
    int rez = 0;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        rez = rez * b + x;
    }
    cout << rez;
    return 0;
}