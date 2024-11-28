#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho mang bat ki
	int arr[5]= {1,2,34,5,6};
	int check;
	int found =0;
	// yeu cau nguoi dung nhap vao 1 phan tu
	printf("Moi ban nhap vao 1 phan tu : ");
	scanf("%d", &check);
	// kiem tra xem phan tu vua nhap co nam trong mang hay khong
	for(int i =0; i < 5; i++){
		if(check == arr[i]){
		printf("Vi tri phan tu trong mang la : %d\n",i);
		found =1;
		break;		
		}
	}
	if (!found){
		printf("Phan tu khong ton tai trong mang\n");
	}
	return 0;

}
