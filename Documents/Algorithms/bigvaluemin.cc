#include <iostream>
using namespace std;

int main() 
{
    int n;
    int x;
    int min;

    cin >> n;
    min = 1<<30;

    for(int i = 1; i <= n; i++ )
    {
        cin >> x;
        if(x < min)
        {
            min = x;
        }
    }
    cout << "The min is: " << min;
        return 0;
}