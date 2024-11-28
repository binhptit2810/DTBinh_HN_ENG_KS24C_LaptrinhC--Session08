#include <stdio.h>

int main(){
	// yeu cau nguoi dung nhap vao 1 so nguyen
	int a;
	printf("Moi ban nhap vao 1 so nguyen");
	scanf("%d", &a);
	// khoi tao mang 2 chieu tu so nguoi dung nhap voi hang va cot bang nhau
	int arr[a][a];
	// yêu cau nguoi dung nhap tung gia tri phan tu cua mang
    printf("Moi ban nhap vao gia tri cho tung phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("Nhap gia tri cho phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
	// in mang duoi dang ma tran vuong
	for(int i=0; i<a;i++){
		for(int j=0; j<a;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
