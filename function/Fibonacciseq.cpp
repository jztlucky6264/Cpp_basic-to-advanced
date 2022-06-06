#include<iostream>
#include<cmath>

using namespace std;

void fab(int n){

    int t1=0;
    int t2=1;
    int nextterm;
    for (int i = 1; i <=n; i++){
          cout<<t1<<endl;
          nextterm= t1+t2;
          t1=t2;
          t2=nextterm;
    }
  return;
    
}


 int main(){

int n;
cin>>n;

fab(n);

    return 0;
}
