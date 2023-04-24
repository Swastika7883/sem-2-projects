#include<stdio.h>
int a(){
    int i,f=2,j=1;
    for(i=1;i<=f*10;i++)
    {
        if(i%2==0)
        {
            printf("2 * %d = %d \n",j++, i);
        }
    }

}
#include<stdio.h>
void main(){
    int i,j;
    for(i=5;i>=1;i--)
    {for (j=1;j<=i;j++)
    {printf("*");
    }
    printf("\n");
    }
}
