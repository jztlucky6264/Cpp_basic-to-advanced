#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n-i+1)
    {
        cout<<j<<" ";
        j=j+1;
    }
int k=1;
while (k<=2*i-2)
{
    cout<<"*"<<" ";
    k=k+1;
}
int l=1;
int number=n-i+1;
while (l<=n-i+1)
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