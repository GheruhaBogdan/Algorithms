#include <iostream>
using namespace std;

int main()
{
    int n, x, min;
    cin >> n >> x;
    min = x;

    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if(x < min)
        {
            min = x;
        }
    }
    cout << min;
        return 0;
}