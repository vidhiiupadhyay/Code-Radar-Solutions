#include <stdio.h>
int getNthBit(int number,int n){
    return(number>>n) &1;
}

int main() {
    scanf("%d%d",&number,&n);
    int bitvalue = getNthBit(number,n);

    printf("%d", bitvalue);
    return 0;
}