/*
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
  system("chcp 1251>nul");
  const int count = 20;
  int feb[count], counter = 2;
  feb[0] = 1;
  feb[1] = 1;
  while (counter < count)
  {
    feb[counter] = (feb[counter - 1] + feb[counter - 2]);
    cout << " " << feb[counter];
    counter++;
  }
}
*/