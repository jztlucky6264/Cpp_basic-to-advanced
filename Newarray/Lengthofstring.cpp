#include <iostream>
using namespace std;

bool checkSpecialchar(char ch){
    if(48<=ch && ch>=57 ||65<=ch && ch>=90 ||97<=ch && ch>=112 ){
        return true;
    }else{
        return false;
    }
}
 char tolowercase(char ch){
     if(ch>='a' &&  ch<='z'){
         return ch;
     }
     else{
         return ch-'A'+'a';
          
     }
 }

int checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }
        else{  
            s++;
            e--;
            if(checkSpecialchar(name[s])==false){
            s++;
            }
            if(checkSpecialchar(name[e])==false){
            e--;
            }
        }
    }
    return 1;
}


void ReverseString(char name[],int n){
    int s=0;
    int E=n-1;
    while(s<E){
        swap(name[s++],name[E--]);
    }
}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter Your name"<<endl;
    cin>>name;
int length=getLength(name);
    cout<<"Length:"<<getLength(name)<<endl;

ReverseString(name,length);
 cout<<"Your name is"<<" "<<name<<endl;
 int Ispalindrome=checkpalindrome(name,length);
 cout<<"given string is palindrome"<<" "<<Ispalindrome<<endl;
 cout<<tolowercase('N')<<endl;
    return 0;
}
