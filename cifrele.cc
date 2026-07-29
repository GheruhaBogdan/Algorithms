#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n != 0)
    {
        int uc = n % 10;
        cout << uc << " ";
        n /= 10;
    }
}
