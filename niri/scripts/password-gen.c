#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    const char charset[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    
    printf("Lunghezza Password: ");
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Input non valido.\n");
        return 1;
    }

    // Inizializza il generatore di numeri casuali
    srand((unsigned int)time(NULL));
    
    char *password = malloc(length + 1);
    if (!password) {
        printf("Errore di allocazione della memoria.\n");
        return 1;
    }

    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[length] = '\0';

    printf("Password generata: %s\n", password);

    system("sh ~/.config/hypr/scripts/show-done");

    free(password);
    return 0;
}
