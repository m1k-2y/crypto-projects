#include <stdio.h>

void bruteForce(char *arr, int n) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = (arr[i] - 'a' - n + 26) % 26 +'a'; 
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = (arr[i] - 'A' - n + 26) % 26 + 'A';
        }
    }
}

int main() {
    char str[100];
    char arr[100];
    
    printf("Input message : ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    for (int i = 1; i < 26; i++) {
        int j = 0;
        while (str[j] != '\0') {
            arr[j] = str[j];
            j++;
        }
        arr[j] = '\0';

        bruteForce(arr, i);
        printf("k = %d : %s\n", i, arr);
    }

    return 0;
}