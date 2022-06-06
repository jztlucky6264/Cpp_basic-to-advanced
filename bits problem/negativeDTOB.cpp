#include <iostream>
#include <math.h>
using namespace std;

int main() {

int n;
cin>>n;
n=abs(n);

int i=0,ans=0;
int bits= ~n;

while(bits <= INT_MIN){
  
  int digit= bits & 1;
ans=digit*pow(10,i)+ans;

bits=bits>>1;
i++;

}


cout<<" the answer is "<< ans<<endl;

    return 0;
}