#include <stdio.h>
int findthelowestsetbitposition(int n){
    if (n==0){
        return -1;
    }
    int position = 0;

    while ((n & 1)==0){
        n >>=1;
        position++;
    }
    return position;

}
int main() {
    int num;
    scanf("%d",&num);
    int position = findthelowestsetbitposition(num);
    if (position  == -1){
        printf("no set bit");
        else{
            printf("%d",position);
        }
    }
    
    return 0;
}