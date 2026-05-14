#include <stdio.h>
#include <string.h>

void vignere(char *key, char *str) {
    int k = strlen(key);
    int keyindex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + key[keyindex % k] - 'a') % 26 + 'A';
            keyindex++;
        }
    }
}

int main() {
    char key[100];
    printf("key : ");
    fgets(key, 100, stdin);
    for (int i = 0; key[i] != '\0'; i++) {
        if (key[i] == '\n') {
            key[i] = '\0';
            break;
        }
    }

    char str[100];
    printf("message : ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    vignere(key, str);

    printf("%s\n", str);

    return 0;
}