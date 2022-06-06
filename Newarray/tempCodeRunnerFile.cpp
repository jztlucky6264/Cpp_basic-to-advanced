
bool checkSpecialchar(char ch){
    if(48<=ch && ch>=57 ||65<=ch && ch>=90 ||97<=ch && ch>=112 ){
        return true;
    }else{
        return false;
    }
}