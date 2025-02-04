#include <stdio.h>
int toggleNthBit(int num, int n){
    return num ^(1<<n);
}

int main() {
    int num,n
    scanf("%d%d", num,n);
    int updatednum = toggleNthBit(num,n);
    printf("%d", updatednum);
    return 0;
}