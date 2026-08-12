#include <iostream>

using namespace std;

int main()
{
 int a;
 int b;
 cout << "Upisite zeljene brojeve" << endl;
 cin >> a;
 cin >> b;
  int c;
  c=(a*a+b*b);
  int resenje;
  resenje=c*c;
  if(c>10)
  cout << "Dvocifren pitagorin broj je " << resenje << endl;
  else
    cout << "Broj nije pitagorin" << endl;
return 0;
}
