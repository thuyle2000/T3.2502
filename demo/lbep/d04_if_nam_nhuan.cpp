#include <stdio.h>
#include <stdlib.h>
//kiem tra 1 nam co phai la nam nhuan hay khong ?
int main() {
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai la nam nhuan\n", year);
    }
}