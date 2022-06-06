#include <iostream>
using namespace std;

void checkPrime(int number){
   int count=0;
  if(number<=1){
   cout<<"Given Number Is Not Prime"<<endl; 
   count=1;
  }    
   
    for(int i=2; i<number; i++){
        if(number%i==0){
   cout<<"Given Number Is Not Prime"<<endl;
   count++;
   break;
        }
    }
    if(count==0){
    cout<<"Given Number is Prime"<<endl;
}
}

int main()
{
    int number;
    cin>>number;

    checkPrime(number);
    return 0;
}
