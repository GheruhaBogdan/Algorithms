#include <iostream>
using namespace std;

int main()
{
int n;
int x;

cin >> n >> x;
int min = x;

for (int i = 1; i < n; i++)
{
    cin >> x;
    if(x < min)
    {
        min = x;
    }
}
    cout << "The min is: " << x << endl;
    return 0;

    }