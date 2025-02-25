#include <stdio.h>
#include <stdlib.h>
// in day so 100, 95, 90 ... 5 bang vong lap FOR
int main()
{
    system("cls");

    for (int i = 100; i >= 5; i -= 5)
    {
        printf("%d ", i);
    }
    printf("\n\n");

    // MO RONG - version 2
    int begin, step, n;
    printf(" >> Nhap so dau tien: ");     scanf("%d", &begin);
    printf(" >> Nhap buoc nhay: ");         scanf("%d", &step);
    printf(" >> Nhap so phan tu: ");        scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%3d ", begin + i * step);
    }
}