#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch>='A' ){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("Lowercase");
    
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}