#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool prim = true;

    for(int d = 2; d * d <= n; d++)
    {
        if(n % d == 0)
        {
            prim = false;
        }
    }

    if(prim == true)
    {
        cout << "prim";
    }
    else
    {
        cout << "Nu este prim";
    }

    return 0;

}