#include <stdio.h>

void Caesar(char *arr, int n) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = (arr[i] - 'a' + n) % 26 + 'a';
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = (arr[i] - 'A' + n) % 26 + 'A';
        }
    }
}

int main() {
    int k;
    printf("k : ");
    scanf("%d", &k);

    getchar();

    char str[100];
    printf("Input message: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }

    Caesar(str, k);

    printf("%s\n", str);

    return 0;
}