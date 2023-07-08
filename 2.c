#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%f %c %f",&a,&c,&b);
    printf("%d %c %d",a,c,b);
    switch(c){
        case ('+'):
          printf("%f",a+b);
        case ('-'):
          printf("%f",a-b);
        case ('*'):
          printf("%f",a*b);
        case ('/'):
          printf("%f",a/b);
        case ('%'):
          printf("%d",(int) a% (int) b);
    }
    return 0;
}