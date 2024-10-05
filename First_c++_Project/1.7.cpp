/*
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
  system("chcp 1251>nul");
  const double milesinkm = 0.621371,ftinkm = 3280.839895;
  double km, m, mi, ft;
  cout << "¬ведите рассто€ние в километрах и метрах" << endl;
  cin >> km;
  cin >> m;
  km+=m/1000;
  mi = (double)((int)km*milesinkm);
  ft = (double)(int)((km * milesinkm - mi) * ftinkm);
  cout << km - m / 1000 << " km " << m << " m = " << mi << " mi " << ft << " ft " << endl;
}
*/