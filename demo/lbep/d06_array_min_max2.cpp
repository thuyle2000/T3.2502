#include <stdio.h>
#include <stdlib.h>
// tao mang co n so nguyen, tinh va in ra gia tri lon nhat va nho nhat
int main() {

    int n;
    do
    {
        printf("Nhap so phan tu cua mang [5-20]: ");
        scanf("%d", &n);
    } while (n<5 || n>20);
    
    
    int a[n] ;  //khai bao mang co n so nguyen

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    int sum = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
        sum += a[i];
    }
    printf(">> Min: %d\n", min);
    printf(">> Max: %d\n", max);
    printf(">> Sum: %d\n", sum);
    printf(">> Average: %.2f\n", (float)sum/n);
    return 0;
} 