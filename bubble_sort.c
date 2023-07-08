#include <stdio.h>



int main(){
    int a;
    printf("Enter n:");
    scanf("%d",&a);
    int array[a];

    printf("Enter array:");
    for (int u=0; u<a; ++u) scanf("%d",&array[u]);

    //bubble sort
    for(int i=0; i<a-1;i++){
        for (int j=0; j<a-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(int k=0;k<a;k++) printf("%d ",array[k]);
    return 0;
}