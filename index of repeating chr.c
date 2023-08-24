#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i,charIndex[256]; // Assuming ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    // Initialize charIndex array to -1
    for (i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    // Traverse the string and find repeated characters
    for (i = 0; i < length; i++) {
        char ch = str[i];

        // Skip spaces and newline characters
        if (ch == ' ' || ch == '\n') {
            continue;
        }

        // Check if the character has been seen before
        if (charIndex[ch] == -1) {
            // This is the first occurrence, store the index
            charIndex[ch] = i;
        } else {
            // This character has been seen before
            printf("Character '%c' is repeated at indices: %d and %d\n", ch, charIndex[ch], i);
        }
    }

    return 0;
}

