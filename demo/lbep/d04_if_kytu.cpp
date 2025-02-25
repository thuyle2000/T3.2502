#include <stdio.h>
#include <stdlib.h>
//kiem tra 1 ky tu co phai la chu cai, chu so, hay ky tu dac biet khong ?
int main() {
    system("cls");
    char c;
    printf("Nhap 1 ky tu: ");   scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c la chu cai\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("%c la chu so\n", c);
    } else {
        printf("%c la ky tu dac biet\n", c);
    }
}