#include <stdio.h>
#include <string.h>

void jefferson(char *str, int *key, char (*disk)[27], char *enc) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 26; j++) {
            if (disk[key[i % 10] - 1][j] == str[i]) {
                enc[i] = disk[key[i % 10] - 1][(j + 6) % 26];
                break;
            }
        }
    }
    enc[i] = '\0';
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

    //Use The key in Wikipedia
    int key[10] = {7, 9, 5, 10, 1, 6, 3, 8, 2, 4};

    char str[100];
    printf("Input message : ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    char enc[100];

    jefferson(str, key, disk, enc);

    printf("%s\n", enc);

    return 0;
}