#include <stdio.h>

int main() {
    char str[1000];  

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
