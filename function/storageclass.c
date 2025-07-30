#include <stdio.h>
#include <string.h>

void string_info(char str[]) {
    int length = 0, vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    printf("Length of string: %d\n", length);
    printf("Total vowels: %d\n", vowels);
}

void copy_string(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Copied string: %s\n", dest);
}

int main() {
    char str[100], copy[100];
    printf("Enter a string: ");
    scanf("%s", str);
    string_info(str);
    copy_string(copy, str);
    return 0;
}
