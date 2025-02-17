#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);

    switch(ch){
        case'1':
        printf("%d",a+b);
        break;
        case'2':
        printf("%d",a-b);
        break;
        case'3':
        printf("%d", a*b);
        break;
        case'4':
        if(b!=0){
            printf("%d",a/b);
        }else{
            printf("error");
        }
        break;
        

    }
    return 0;
}