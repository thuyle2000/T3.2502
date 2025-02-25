#include <stdio.h>
#include <stdlib.h>
// tinh tong cua cac so le giua 2 so n1 va n2 (ap dung lap FOR)
int main()
{
    system("cls");
    int num1, num2, sum = 0;
    printf("Nhap so n1: ");
    scanf("%d", &num1);
    printf("Nhap so n2: ");
    scanf("%d", &num2);


    if (num1 < num2)
    {
        for (int i = num1 + 1; i < num2; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }
    else
    {
        for (int i = num2 + 1; i < num1; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }
    printf("Tong cua cac so le giua %d va %d la: %d", num1, num2, sum);
}