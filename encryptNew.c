#include<stdio.h>
#include<string.h>

// Function to encrypt the string by adding 1 to ASCII value of its characters
void encrypt (char *str) {
    char *ptr = str;
    while(*ptr != '\0') {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main() {
    char str[] = "mwonusee";
    encrypt(str);
    printf("Encrypted string: %s", str);
    return 0;
}
