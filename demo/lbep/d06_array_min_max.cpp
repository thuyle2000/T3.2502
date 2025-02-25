#include <stdio.h>
#include <stdlib.h>
// tao mang co 10 so nguyen, tinh va in ra gia tri lon nhat va nho nhat
int main() {

    int a[10] ;  //khai bao mang co 10 so nguyen

    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    for (int i = 1; i < 10; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf(">> Min: %d\n", min);
    printf(">> Max: %d\n", max);
    return 0;
} 