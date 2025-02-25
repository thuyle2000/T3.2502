#include <stdio.h>
#include <stdlib.h> 
// in tam giac vuong ngoi sao (goc 2)
int main(){
    system("cls");

    int n;
    do{
        printf("Nhap chieu cao tam giac [3-20]: ");
        scanf("%d", &n);
    } while (n < 3 || n > 20);
    
    //goc 2
    printf("\n\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j < i){
                printf("  ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
    //goc 3
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n-i){
                printf("  ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    
}