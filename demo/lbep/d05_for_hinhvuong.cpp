#include <stdio.h>
#include <stdlib.h>
// in ra khoi hinh vuong n-dong
int main()
{
    system("cls");
    
    int n;
    printf("Nhap so dong : ");     scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        //vong lap i dieu khien so dong in
        for (int j = 0; j < n; j++)
        {
            //vong lap j dieu khien so cot in
            printf(" * ");
        }
        printf("\n"); //ket thuc 1 dong
    }
}