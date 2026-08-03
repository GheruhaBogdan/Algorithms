#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cc;
    int r = n%9;
    if(r == 0)
    {
         cc = 9;
    }
    else
    {
        cc = r;
    }
    cout << cc;
}