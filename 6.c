// NWW --- zmiana 1
// Data   : 2.04.2008 --- zmiana 11
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>

using namespace std;

int main(void)
{

 unsigned long long a,b,t,ab,xxdddd;
  cin >> a >> b;
  ab = a * b;
  while(b)
  {
    t = b;
    b = a % b;
    a = t;
  }
  ab /= a;
  cout << ab << endl << endl;
  return 0;
}
