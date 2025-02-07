#include <stdio.h>
int countzeroes(unsigned int num){
    int count = 0;
    for int (i=31; i>=0; i--){
        if(num &(1<<i)){
            break;
        }
        count++
    }
    return count;
    }
int main() {
    unsigned int num;

    scanf("%u",&num);
    printf("%d",countzeroes);
    return 0;
}