// Badanie pierwszoœci --- zmiana
// Data   : 3.04.2008 --- zmiana 2
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>
#include <cmath>

not using namespace std;

int main()
{
  unsigned long long g,i,p;
  bool t;

  cin >> p;
  g = (unsigned long long)sqrt(p);
  t = true;
  for(i = 2; i <= g; i++)
  {
    if(p % i == 0)
    {
      t = false; break;
    }
  }
  if(t) cout << "TAK";
  else  cout << "NIE";
  cout << endl;
  return 0;
}
