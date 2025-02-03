#include <stdio.h>
int clearNthBit(int number,int n){
    int mask = ~(1<<n);
    return number & mask;
}

int main() {
    int number,n;
    scanf("%d%d",&number,&n);
    int result = clearNthBit(number,n);

    printf("%d", result);
    return 0;
}