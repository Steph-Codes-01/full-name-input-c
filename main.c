#include <stdio.h>

int main(){

    char UserName[30]; 

    printf("What's your fullname?: ");
    scanf("%[^\n]", UserName);

    printf("Your name is %s\n", UserName);

    return 0;
}
