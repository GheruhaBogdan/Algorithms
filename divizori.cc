#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int d = 1; d * d <= 75; d++)
    {
        if(n % d == 0)
        {
            cout << d << " ";
            if(d * d < n)
            {
                cout << n/d << " ";
            }
        }
    }
}