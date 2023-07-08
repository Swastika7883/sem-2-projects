#include <stdio.h>
int main(){
    char a=getchar();
    if ((a>='A' && a<='Z') || (a>='a' && a<='z')){
        printf("%c is an alphabet",a);
    }
    else{
        printf("N/A");
    }
}