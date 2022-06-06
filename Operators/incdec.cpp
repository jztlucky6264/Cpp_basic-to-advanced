#include <iostream>
using namespace std;

int main() {
int i=5;


cout<<(++i)<<endl;
//i=6
cout<<(i++)<<endl;
//i=6,i=7
cout<<(--i)<<endl;
//i=6
cout<<(i--)<<endl;
//i=6,i=5
cout<<i;

    return 0;
}