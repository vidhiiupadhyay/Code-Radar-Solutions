#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);

    switch(ch){
        case'+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case'-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case'*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case'/':
        if(b!=0){
            printf("%d/%d=%d",a,b,a/b);
        }else{
            printf("error");
        }
        break;
        default:
        printf("invalid");
        break;

    }
    return 0;
}