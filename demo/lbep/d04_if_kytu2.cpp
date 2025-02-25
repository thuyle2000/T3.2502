#include <stdio.h>
#include <stdlib.h>
//version 2: kiem tra 1 ky tu co phai la chu cai, chu so, hay ky tu dac biet khong ?
int main() {
    system("cls");
    char c;
    printf("Nhap 1 ky tu: ");   scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c)  {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c la nguyen am\n", c);
            break;       
        default:
            printf("%c la phu am\n", c);
            break;
        }





    } else if (c >= '0' && c <= '9') {
        printf("%c la chu so\n", c);
    } else {
        printf("%c la ky tu dac biet\n", c);
    }
}