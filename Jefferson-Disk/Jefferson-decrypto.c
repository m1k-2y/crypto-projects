#include <stdio.h>
#include <string.h>

void decrypto(char (*disk)[27], char *msg, int *key, char *dec) {
    int i;
    for (i = 0; msg[i] != '\0'; i++) {
        for (int j = 0; j < 26; j++) {
            if (disk[key[i % 10] - 1][j] == msg[i]) {
                dec[i] = disk[key[i % 10] -1][(j + 20) % 26];
                break;
            }
        }
    }
    dec[i] = '\0';
}

int main() {
    char disk[10][27] = {
        "ZWAXJGDLUBVIQHKYPNTCRMOSFE",
        "KPBELNACZDTRXMJQOYHGVSFUWI",
        "BDMAIZVRNSJUWFHTEQGYXPLOCK",
        "RPLNDVHGFCUKTEBSXQYIZMJWAO",
        "IHFRLABEUOTSGJVDKCPMNZQWXY",
        "AMKGHIWPNYCJBFZDRUSLOQXVET",
        "GWTHSPYBXIZULVKMRAFDCEONJQ",
        "NOZUTWDCVRJLXKISEFAPMYGHBQ",
        "XPLTDSRFHENYVUBMCQWAOIKZGJ",
        "UDNAJFBOWTGVRSCZQKELMXYIHP"
    };

    int key[10] = {7, 9, 5, 10, 1, 6, 3, 8, 2, 4};

    char msg[100];
    printf("Input message : ");
    fgets(msg, 100, stdin);

    for (int i = 0; msg[i] != '\0'; i++) {
        if (msg[i] == '\n') {
            msg[i] = '\0';
        }
    }

    char dec[100];

    decrypto(disk, msg, key, dec);

    printf("%s\n", dec);

    return 0;
}