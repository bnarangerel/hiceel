#include <bits/stdc++.h>


int main ()
{
  char str[1000];
  char * pch;
  cin >> str;
  cout << "a useg hed orsniig hartsgaay";
  pch=strchr(str,'a');
  while (pch!=NULL)
  {
    cout << "ene yg yu ymbee" ;
    pch=strchr(pch+1,'a');
  }
  return 0;
}
