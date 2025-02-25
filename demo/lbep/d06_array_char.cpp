#include <stdio.h>
#include <stdlib.h>
// tao mang ky tu (chuoi ky tu), nhap va in ra tung ky tu trong chuoi.
int main() {
    char s[100];  //khai bao mang s chua toi da 99 ky tu

    printf("Nhap chuoi bat ky: ");
    // fgets(s, 100, stdin); // doc chuoi tu ban phim, toi da 99 ky tu
    // gets(s); // doc chuoi tu ban phim, toi da 99 ky tu
    scanf("%[^\n]s", s); // doc ky tu xuong dong
    
    for (int i = 0; s[i] != '\0'; i++) {
        printf("Ky tu thu %d: %c \n", i, s[i]);
    }
    
}