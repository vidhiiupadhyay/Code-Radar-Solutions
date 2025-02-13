#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",a,b,c);

    switch(c){
        case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case'-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case'*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case'/':
        printf("%d/%d=%d",a,b,a/b);
        break;

    }
    return 0;
}