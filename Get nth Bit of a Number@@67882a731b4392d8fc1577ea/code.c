#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0 ||b==2||b==3){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    
    return 0;
}