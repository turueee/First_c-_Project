/*
#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int num)
{
  int fac = 1, mn = 1;
  while (mn <= num)
  {
    fac *= mn;
    mn++;
  }
  return fac;
}

int main()
{
  system("chcp 1251>nul");
  int c, k = 0, n;
  cout << "¬ведите n:" << endl;
  cin >> n;
  if (k < n)
  {
    while (k <= n)
    {
      cout << factorial(n) / (factorial(k) * factorial(n - k))<<" ";
      k++;
    }
  }
  else
  {
    cout << "¬веден некорректный параметр n." << endl;
  }
}
*/