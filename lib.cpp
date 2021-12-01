#include "lib.h"

bool primo(char a){

    if((a>=65 and a<=90) || (a>=97 and a<=127)){
        return true;
    }else{
        return false;
    }
}

char trasformazione(char a){
    if (a>=65 a && a<=90){
        a=a+32;
        return a;
    }else if(a>=97 && a<=127){
        a=a-32;
        return a;
    }
}


