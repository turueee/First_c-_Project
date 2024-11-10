/*
#include <iostream>
#include <cstdlib>

using namespace std;
int step(int num, int pow)
{
  if (pow == 0)
    return 1;
  else
    return step(num, pow - 1) * num;
}
int main()
{
  const int n = 10;
  int i = 0, mas[n];

  while (i < n)
  {
    mas[i] = step(2, i);
    i++;
  }
  i = 0;
  while (i < n)
  {
    cout << "mas[" << i << "] = " << mas[i] << endl;
    i++;
  }
}
*/