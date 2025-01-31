#include <stdio.h>

int main() {
    int a[32];
    scanf("%d",&a);
    if (a&(1<<31)){
    printf("Set");}
    else{
        printf("Not Set");
    }
    
    return 0;
}