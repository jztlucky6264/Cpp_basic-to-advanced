#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;

int a=0;
int b=1;
 cout<<a<<" "<<b <<" " ;

int c;

for (int i = 1; i <=n; i++)
{
    c=a+b;

    cout<<c<<" ";

    a=b;
    b=c;
}
    return 0;
}