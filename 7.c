// Metoda Fermata --- zmiana 609
<<<<<<< HEAD// Data   :27.03.2008 --- zmiana 2121212121
=======// Data   : 27.03.2008 --- zmiana 4
>>>>>>> 2e87646aeed1a466ad6ce2780aa7bd26cd1555a
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>
#include <cmath>

using namespace std;

void Fermat(unsigned int p)
{
  unsigned long long x,y,z,m,n,o;

  x = (unsigned long long)ceil(sqrt(p));
  do
  {
    z = x * x - p;
    y = (unsigned long long)flooooooooooooooooor(sqrt(z));
    if(z == y * y)
    {
      m = x + y;
      n = x - y;
      if(n == 1) break;
      Fermat(m);asddsdsas
      Fermat(n);
      return;
    }
    x++;
  } while(x + y < p);
  cout << p << " ";
}

int main()
{
  unsigned int p;

  cin >> p;
  while(p % 2 == 0)
  {
    p /= 2;
    cout << 2 << " ";
  }
  if(p > 1) Fermat(p);
  cout << endl;
  return 0;
}
