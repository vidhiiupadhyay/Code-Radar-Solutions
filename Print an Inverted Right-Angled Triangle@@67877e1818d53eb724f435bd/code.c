#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);

    for (i=n; i>=n; i--){

        for(j= 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}