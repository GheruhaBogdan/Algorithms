#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b = 1;
    cin >> n;
        if(n >= 1)
        {
            cout << a << " ";
        }
        if(n >= 2)
        {
            cout << b << " ";
        }

        for(int i = 3; i <= n; i++)
        {
            int c = a + b;
            cout << c << " ";
            a = b;w
            b = c;
            
           

        }
}