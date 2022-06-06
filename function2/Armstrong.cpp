#include<iostream>
#include<math.h>

using namespace std;
 int main(){

int n;
cin>>n;


int sum=0;
int original=n;
while (n>0)
{
   int lastdigits =n%10;
 sum+=pow(lastdigits,3);
 n=n/10;
}
/* 
if (sum==original)
{
    cout<<"number is armstrong number";
}
else{
    cout<<"number is not a armstrong number";
} */
    return 0;
}
