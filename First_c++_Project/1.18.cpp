/*
#include <iostream>
#include <cstdlib>

using namespace std;
int fib(int n)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return 1;
  if (n > 1)
    return fib(n - 2) + fib(n - 1);
}

int main()
{
  const int n = 10;
  int i = 0, mas[n];
  while (i < n)
  {
    mas[i] = fib(i);
    i++;
  }
  i = 0;
  while (i < n)
  {
    cout << "mas[" << i << "] = " << fib(i) << endl;
    i++;
  }
}
*/