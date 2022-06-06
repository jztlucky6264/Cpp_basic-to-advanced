#include <iostream>
using namespace std;

int Ap(int n){

    int answer=(3*n+7);
    return answer;
}

int main() {

    int n;
    cin>>n;

    cout<<" the nth term of ap is "<< Ap(n)<<endl;
    return 0;
}