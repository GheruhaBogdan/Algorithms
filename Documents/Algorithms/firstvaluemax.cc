#include <iostream>
using namespace std;

int main()
{
    int x;
    int max;

    cin >> x;   
    max = x;   

    cin >> x;   
    while(x != 0)
    {
        if(x > max) 
        {
            max = x; 
            cin >> x; 
        }     
        
          
    }
    
    cout << max;   
    return 0;
}
