#include <stdio.h>
#include <stdlib.h>
//tinh va in ra day so fibonacci n-phan tu
int main(){
    system("cls");

    int n;
    do{
        printf("Nhap n-phantu [3-20]: ");
        scanf("%d", &n);
    } while (n < 3 || n > 20);
    

    int f1 = 1, f2 = 1, f3;
    printf("%d %d ", f1, f2);
    
    for(int i = 3; i <= n; i++){
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
}