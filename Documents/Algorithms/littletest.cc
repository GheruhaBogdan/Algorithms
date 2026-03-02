#include <iostream>
using namespace std;

int main()
{
    int max;
    int n;
    int x;
   
    cin >> n >> x;
    max = x;

    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }

    cout << max;
}