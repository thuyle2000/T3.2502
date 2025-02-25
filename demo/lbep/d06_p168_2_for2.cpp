#include <stdio.h>
#include <stdlib.h>
//tinh tong cac so le tu n1 den n2 - VERSION 2

int main(){
    system("cls");

    int n1, n2, sum =0;
    printf("Nhap n1: ");
    scanf("%d", &n1);
    printf("Nhap n2: ");
    scanf("%d", &n2);

    int start = n1 < n2 ? n1 : n2;
    int end = n1 < n2 ? n2 : n1;

    // chuyen start va end thanh so le
    start = (start%2 == 0) ? start + 1 : start+2;
    end = (end%2 == 0) ? end - 1 : end-2;

    for(int i = start; i <= end; i+=2){
        printf("%d + ", i);
        sum += i;
    }
    printf("\b\b= %d", sum);
}
