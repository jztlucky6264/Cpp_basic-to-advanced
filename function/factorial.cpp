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


int answer=fact(n);
cout<<answer;
    return 0;
}
