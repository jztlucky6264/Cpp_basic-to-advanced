#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;

int i=1;
while (i<=n)
{
    int j=1;

    while (j<=i-1)
    {
        cout<<"  ";
        j=j+1;
    }
    int k=1;
    int number=i;
    while (k<=n-i+1)
    {
       cout<<number<<" ";
       number=number+1;
       k=k+1;
        
    }
      
    cout<<endl;
    i=i+1;
}


    return 0;
}