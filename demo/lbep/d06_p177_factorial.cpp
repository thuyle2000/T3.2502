#include <stdio.h>
#include <stdlib.h>

// tinh va in ra giai thua cua n
int main(){
    system("cls");

    int n;
    do{
        printf("Nhap n [20]: ");
        scanf("%d", &n);
    } while (n < 1 || n > 20);

    double factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("%d! = %.0f", n, factorial);
}