#include<iostream>
#include<cmath>

using namespace std;

int fact(int n ){
int ans=1;
    for (int i = 2; i <=n; i++)
    {
  ans=ans*i;
    }
    return ans;
}

 int main(){

int n;
cin>>n;

for (int i = 0; i <n; i++)
{
for (int j = 0; j <=i; j++)
{
int answer=fact(i)/(fact(j)*fact(i-j));
cout<<answer<<" ";    
}
cout<<endl;

}

    return 0;
}
