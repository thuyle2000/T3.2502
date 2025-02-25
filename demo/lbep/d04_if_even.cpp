#include <stdio.h>
#include <stdlib.h>

//kiem tra 1 so nguyen co phai la so chan hay khong ?
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d la so chan\n", n);
    } else {
        printf("%d la so le\n", n);
    }
}