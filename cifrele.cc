#include <iostream>
using namespace std;

int main()
{
  int n, r = 0, p = 1;
  cin >> n;
  while (n != 0)
  {
    int uc = n % 10;
    if(uc % 2 == 0)
    {
        r = r + p * uc;
    }
    else
    {
        r = r + p * (uc - 1);
    }
    p = p * 10;
    n = n / 10;
  }
  cout << r << endl;
  return 0;
}