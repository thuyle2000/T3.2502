#include <stdio.h>
#include <stdlib.h>
// in ra bang cuu chuong n [1-20] - version 4
int main()
{
    system("cls");

    int n = 0;
    do
    {
        printf("Nhap so nguyen duong n [1-20]: ");
        scanf("%d", &n);
        if (n < 1 || n > 20)
        {
            printf(">> Loi: So nhap khong hop le. Nhap lai.\n");
            continue;
        }
        break;
    } while (1==1);

    int i = 1;
    while (i <= 10)
    {
        printf(" %2d x %2d = %3d \n", n, i, n * i);
        i++;
    }
}