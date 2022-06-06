/* #include <iostream>
using namespace std;

bool isPrime(int num){

    for (int i = 2; i <num; i++)
    {
        if (num%i==0)
        {
         return 0;   
        }
        
    }
    return 1;
}


int main() {

int num;
cin>>num;

  if (isPrime(num))
  {
      cout<<" number is prime number "<< endl;
  }else
  {
      cout<<" number is not a prime number "<< endl;
        }
  
  

    return 0;
} */



#include <iostream>
using namespace std;

int update(int a){
 a -= 5;
 return a;
}
int main() {

  int a=12;
  update(a);
  cout<<a<<endl;


    return 0;
}


