#include <stdio.h>

int main() {
    char userName[30];

    printf("Enter your full name: ");
    scanf("%[^\n]", userName);

    printf("\n--- User Details ---\n");
    printf("Full Name: %s\n", userName);

    return 0;
}
