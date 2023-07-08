#include<stdio.h>
int main(){
    printf("SWASTIKA BERA\n");
    printf("Roll no:1/22/FET/BCS/441\n ");
    int a;
    printf("Enter the year:");
    scanf("%d", &a);

    if (a % 400 ==0)
    {printf("%d is a leap year", a);}

    else if(a % 100 == 0){
        printf("%d is not a leap year", a);
    }
    else if(a % 4 == 0){
        printf("%d is a leap year", a);

    }
    else {
        printf(" its not a leap year");
    }
    return 0;
}