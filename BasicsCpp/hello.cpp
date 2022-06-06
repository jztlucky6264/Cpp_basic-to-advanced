#include<iostream>
using namespace std;
 int main(){


int i=1;
int j=2;
int k;

k= i + j + i++ + j++ + ++i + ++j;

cout<< i << j << k << endl;

    return 0;
}

/*  #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif */