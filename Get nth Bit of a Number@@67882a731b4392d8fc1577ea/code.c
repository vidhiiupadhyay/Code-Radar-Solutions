#include <stdio.h>
int getnthbit(int a,int b){
    return(a>>b)& 1;
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int bitvalue = getnthbit(a,b);
    printf("%d",bitvalue);
    return 0;
}