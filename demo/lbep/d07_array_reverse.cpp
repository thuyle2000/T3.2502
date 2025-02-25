#include <stdio.h>
#include <stdlib.h>

// dao nguoc mang so nguyen
int main(){
    system("cls");

    int n;
    printf("Nhap vao so luong phan tu cua mang so nguyen: ");
    scanf("%d", &n);

    int a[n];   //khai bao mang so nguyen a[] co n phan tu

    // nhap du lieu cho mang so nguyen a[]
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int temp;
    
    printf("\n\nMang so nguyen truoc khi dao nguoc:\n");
    for(int i = 0; i < n; i++){
        printf("%d - ", a[i]);
    }

    //dao nguoc mang so nguyen
    for(int i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    printf("\n\nMang so nguyen sau khi dao nguoc:\n");
    for(int i = 0; i < n; i++){
        printf("%d - ", a[i]);
    }
}