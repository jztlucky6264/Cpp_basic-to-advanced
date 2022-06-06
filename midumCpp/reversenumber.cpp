#include<iostream>
#include<cmath>

using namespace std;
 int main(){

int n;
cin>>n;


int reverse=0;
while (n>0)
{
   int lastdigits =n%10;
 reverse=reverse*10+lastdigits;
 n=n/10;
}

cout<<reverse<<endl;

    return 0;
}
