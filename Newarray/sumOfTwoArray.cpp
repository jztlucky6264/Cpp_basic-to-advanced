#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[9]={6 ,0 ,9 ,5, 2 ,2, 1, 0 ,4 };
    int b[9]={4 ,8 ,1 ,1 ,3,3,4,6,7 };
    int m=9;
    int n=9;
    int digit1=0;
    int digit2=0;
   for(int j=0; j<n; j++){
          digit1=(digit1+b[j])*10;
    }
    for(int j=0; j<m; j++){
          digit2=(digit2+a[j])*10;
    }
    int sum=(digit1/10)+(digit2/10);
    cout<<digit1<<endl;
    cout<<digit2<<endl;
    cout<<sum;
    return 0;
}
