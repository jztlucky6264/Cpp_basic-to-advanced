#include <iostream>
using namespace std;

char Getmaxi(string s){
    int arr[26]={0};
for (int i = 0; i <s.length(); i++)
{
char ch=s[i];
int number=0;
number=ch-'a';
arr[number]++;
}
//find amximum number of character
int max=-1,ans=0;

for (int i = 0; i <26; i++)
if(max<arr[i]){
    ans=i;
    max=arr[i];
}
return 'a'+ans;
}

int main(int argc, char const *argv[])
{
string s;
cin >>s;
cout<<Getmaxi(s)<<endl;    
    return 0;
}
