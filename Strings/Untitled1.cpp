#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 5

void generate_random_password(char *password) {
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int num_characters = strlen(characters);
    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = characters[rand() % num_characters];
    }
    
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(NULL));

    char target_password[PASSWORD_LENGTH + 1];
    generate_random_password(target_password);
    printf("Randomly Generated Password: %s\n", target_password);

    printf("Press Enter to start the brute force attack...");
    getchar(); // Wait for Enter key

    char current_password[PASSWORD_LENGTH + 1];
    memset(current_password, '\0', sizeof(current_password));

    int attempt = 0;
    while (strcmp(target_password, current_password) != 0) {
        generate_random_password(current_password);
        printf("Attempt #%d: %s\n", ++attempt, current_password);
    }

    printf("Password found: %s\n", current_password);

    return 0;
}
