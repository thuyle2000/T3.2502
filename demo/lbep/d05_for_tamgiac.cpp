#include <stdio.h>
#include <stdlib.h>
// in ra khoi tam giac vuong can n-dong
int main()
{
    system("cls");
    
    int n;
    printf("Nhap so dong : ");     scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        //vong lap i dieu khien so dong in
        for (int j = 0; j < i+1; j++)
        {
            //vong lap j dieu khien so cot in
            printf("* ");
        }
        printf("\n"); //ket thuc 1 dong
    }
}