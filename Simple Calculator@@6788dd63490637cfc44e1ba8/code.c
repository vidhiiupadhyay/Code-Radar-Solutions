#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);

    switch(ch){
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