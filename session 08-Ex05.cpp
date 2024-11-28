#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot ma tran duoi dang mang 2 chieu
    int arr[3][3] = {{1, 2, 3},{6, 7, 8},{11, 12, 13}};
    // khai bao so hang va cot cua ma tran
    int row = 3;
    int col = 3; 
    int sum = 0; 

    // tinh tong cac phan tu tren duong bien cua ma tran
    for (int i = 0; i < col; i++) {
        sum += arr[0][i];  
        sum += arr[row - 1][i];  
    }

    // su dung vong lap de duyet qua cac phan tu dau tien va cuoi cung
    for (int i = 1; i < row - 1; i++) {
        sum += arr[i][0];  
        sum += arr[i][col - 1];  
    }

    // In ra tong cac phan tu tren duong bien ra ngoai man hinh
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

