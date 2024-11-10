#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
  const int n = 10;
  int i = 0, mas[n];
  while (i < n)
  {
    cin >> mas[i];
    i++;
  }
  i = 0;
  while (i < n)
  {
    cout << "mas[" << i << "] = " << mas[i] << endl;
    i++;
  }
}