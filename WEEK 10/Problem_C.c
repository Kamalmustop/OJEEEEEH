#include <stdio.h>
#include <ctype.h>
#include <string.h>

int has_digit(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}

int has_uppercase(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            return 1;
        }
    }
    return 0;
}

int has_special_char(const char *str) {
    const char *special_chars = "!@#$%^&*()-+";
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(special_chars); j++) {
            if (str[i] == special_chars[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    char password[101];
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    int password_length = strlen(password);

    if (password_length < 8 || password_length > 33) {
        printf("invalid password\n");
    } else if (has_digit(password) && has_uppercase(password) && has_special_char(password)) {
        printf("strong password\n");
    } else if (has_digit(password) && has_uppercase(password) ||
               has_digit(password) && has_special_char(password) ||
               has_uppercase(password) && has_special_char(password)) {
        printf("medium password\n");
    } else {
        printf("weak password\n");
    }

    return 0;
}