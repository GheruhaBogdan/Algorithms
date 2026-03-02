#include <iostream>
using namespace std;

int main()
{
    int x, n, min, max;
    cin >> n >> x;
    min = x;
    max = x;
    int sum;

    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        if (x < min)
        {
            min = x;
        }

    }
    sum = max + min;
    cout << sum;
}