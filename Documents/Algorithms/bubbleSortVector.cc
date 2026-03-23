#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, v[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp;
                temp = v[j];
                v[j] = v[j+1];
                v[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
        return 0;
}