#include <iostream>
using namespace std;

  int main() {

  int money;
  cout<<" enter the amount you want to count "<< endl;
  cin>>money;


 switch (true)
 {

 case true: 

 cout<<money/100<<endl;
 money=money%100;
  
  cout<<money/50<<endl;
  money=money%50;


  cout<<money/20<<endl;
  money=money%20;

 cout<<money/1<<endl;

break;
 
 default:cout<<" please enter the valid money "<< endl;
     break;
 } 

    return 0;
}