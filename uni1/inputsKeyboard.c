#include <stdio.h>

char str[255];

int main(){
    printf("Enter a name:  \n");
    scanf("%s", str);
    printf("you enter a name as: %s\n", str);
    return 0;
}