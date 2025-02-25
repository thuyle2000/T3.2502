#include <stdio.h>
#include <stdlib.h>
// in ra bang cuu chuong n [1-20]
int main()
{
    system("cls");
    
    int n;
    printf("Nhap so nguyen duong n [1-20]: ");     scanf("%d", &n);
    int i = 1;
    while (i <= 10)
    {
        printf(" %2d x %2d = %3d \n", n, i, n*i);
        i++;
    }
}