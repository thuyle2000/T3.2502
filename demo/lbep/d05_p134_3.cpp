#include <stdio.h>
#include <stdlib.h> 
//kiem tra hieu cua a-b co bang a hoac b khong
int main()
{
    system("cls");
    int a, b;
    printf("Nhap so nguyen a: ");     scanf("%d", &a);
    printf("Nhap so nguyen b: ");     scanf("%d", &b);
    if (a - b == a || a - b == b)  {
        printf("hieu cua a-b (%d) bang a hoac b \n", a-b);
    }
    else {
        printf("hieu cua a-b (%d) khong bang a hoac b \n", a-b);
    }           
}