#include<stdio.h>
int main(){
    printf("SWASTIKA BERA\n");
    printf("Roll no:1/22/FET/BCS/441\n ");
    char a;
    printf("Enter a character:");
    scanf("%c", &a);

    if((a>= 'a'&& a<= 'z')||( a >='A' && a<='Z' ))
        printf("%c is an alphabet", a);
    else{
        printf("%c is not an alphabet",a);
    
    }
return 0;



}