#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

void caesar_encrypt(char *original, char *encrypted, int shift_amount) {
    int length = strlen(original);
    shift_amount = shift_amount % 26;
    for (int i = 0; i < length; i++) {
        if (original[i] >= 'A' && original[i] <= 'Z') {
            encrypted[i] = ((original[i] - 'A' + shift_amount) % 26) + 'A';
        } else if (original[i] >= 'a' && original[i] <= 'z') {
            encrypted[i] = ((original[i] - 'a' + shift_amount) % 26) + 'a';
        } else {
            encrypted[i] = original[i];
        }
    }
    encrypted[length] = '\0';
}

void caesar_decrypt(char *encrypted, char *original, int shift_amount) {
    int length = strlen(encrypted);
    shift_amount = shift_amount % 26;
    for (int i = 0; i < length; i++) {
        if (encrypted[i] >= 'A' && encrypted[i] <= 'Z') {
            original[i] = ((encrypted[i] - 'A' - shift_amount + 26) % 26) + 'A';
        } else if (encrypted[i] >= 'a' && encrypted[i] <= 'z') {
            original[i] = ((encrypted[i] - 'a' - shift_amount + 26) % 26) + 'a';
        } else {
            original[i] = encrypted[i];
        }
    }
    original[length] = '\0';
}

int main() {
    char original[MAX_CHARS];
    char encrypted[MAX_CHARS];
    int shift_amount;
    int option;

    printf("What would you like to do?\n 1. Encrypt a message\n 2. Decrypt a message\n");
    scanf("%d", &option);
    getchar();

    if (option == 1) {
        printf("Enter a message to encrypt: ");
        fgets(original, MAX_CHARS, stdin);
        original[strcspn(original, "\n")] = '\0';

        printf("\nEnter shift amount: ");
        scanf("%d", &shift_amount);

        caesar_encrypt(original, encrypted, shift_amount);
        printf("\nEncrypted message: %s\n", encrypted);
    } else if (option == 2) {
        printf("Enter a message to decrypt: ");
        fgets(encrypted, MAX_CHARS, stdin);
        encrypted[strcspn(encrypted, "\n")] = '\0';

        printf("\nEnter the shift amount: ");
        scanf("%d", &shift_amount);

        caesar_decrypt(encrypted, original, shift_amount);
        printf("\nDecrypted message: %s\n", original);
    }

    return 0;
}
