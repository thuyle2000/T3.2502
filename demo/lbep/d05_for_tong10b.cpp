#include <stdio.h>
#include <stdlib.h> 
// tinh va in ra tong cua n so nguyen dau tien - version 2
int main()
{
    system("cls");

    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d", &n);

    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += i;  // tong = tong +i
        printf("%d + ", i);
    }
    printf("\b\b = %d", tong);
}