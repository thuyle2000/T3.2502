#include <stdio.h>
#include <stdlib.h> 
//kiem tra khoang cach cua a va b co bang a hoac b khong
int main()
{
    system("cls");
    int a, b;
    printf("Nhap so nguyen a: ");     scanf("%d", &a);
    printf("Nhap so nguyen b: ");     scanf("%d", &b);

    int kc = a - b > 0 ? a - b : b - a; // khoang cach giua a va b

    if (kc == a || kc == b)  {
        printf("Khoang cach cua a va b (%d) bang a hoac b \n", a-b);
    }
    else {
        printf("Khoang cach cua a va b (%d) khong bang a hoac b \n", a-b);
    }           
}