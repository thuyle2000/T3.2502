#include <stdio.h>
#include <stdlib.h>
//version 2: kiem tra 1 nam co phai la nam nhuan hay khong ?
int main() {
    int year;
    printf("Nhap nam: ");   scanf("%d", &year);

    if (year % 400 == 0){
        printf("%d la nam nhuan the ky\n", year);
    } else if (year % 100 == 0) {
        printf("%d nam the ky\n", year);
    } else if (year % 4 == 0) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai la nam nhuan\n", year);
        
    }
}