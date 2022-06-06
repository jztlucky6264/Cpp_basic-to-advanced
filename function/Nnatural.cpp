#include <iostream>
using namespace std;

int natsum(int n){
   int sum = (n*(n+1))/2;
   return sum;
}


int main() {

    int n;
    cin>>n;

cout<< natsum(n)<<endl;

 
    return 0;
}