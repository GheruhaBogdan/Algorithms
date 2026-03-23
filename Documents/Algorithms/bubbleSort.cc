#include <iostream>
using namespace std;

int main() 
{
    int a[] = {1, 3, 5, 6, 2, 4};
    int size = sizeof(a) / sizeof(a[1]);

       
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp;
                
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

            }
        }
    }
      for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
        return 0;
}