#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n-i)
    {
    cout<<"  ";
    j=j+1;
    }
    int k=1;
    while (k<=i)
    {
        cout<<k<<" ";
        k=k+1;
    }
    int l=1;
    int number=i-1;
    while (l<=i-1)
    {
        cout<<number<<" ";
        number=number-1;
   l=l+1;
    }
    cout<<endl;
    i=i+1;
    
    
}


    return 0;
}