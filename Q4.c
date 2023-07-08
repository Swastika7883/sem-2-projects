#include<stdio.h>
int main(){
    printf("SWASTIKA BERA\n");
    printf("Roll no:1/22/FET/BCS/441\n ");
    char a;
    int l,u;
    printf("Enter an Alphabet :");
    scanf("%C",&a);

    l=(a =='a'|| a=='e' || a=='i' || a=='o' || a=='u');
    u=(a =='A'|| a=='E'|| a=='I'||a=='O'|| a=='U');
if (l || u){
    printf("%c is a vowel", a);
}
else{ 
    printf("%c is a consonant", a);
}
}