#include <stdio.h>
#include <stdlib.h>
//kiem tra so a co chia het cho b khong
int main()
{
    system("cls");
    int a, b;
    printf("Nhap so nguyen a: ");     scanf("%d", &a);
    printf("Nhap so nguyen b: ");     scanf("%d", &b);
    if (a % b == 0)  {
        printf("a chia het cho b");
    }
    else {
        printf("a khong chia het cho b");
    }
}
