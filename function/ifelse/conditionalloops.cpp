#include <iostream>
using namespace std;

int main() {

  char a;
  cin >> a;

  if (a>=97 && a<=122)
  {
      cout<<"this is lower case " ;
  }
  else if (a>=65 && a<=90)
  {
      cout<< " this is upper  case ";
  }
  else if(a>=48 && a<=57){
  cout<< " this is numeric value ";
  }
  



    return 0;
}