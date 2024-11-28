#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho mot ma tran vuong
	int arr[3][3]= {{2,3,4},{6,7,8},{9,5,7}};
	//in cac phan tu tren duong cheo chinh va tong cua chung
	printf("Cac gia tri cua ma tran tren duong cheo chinh la %d %d %d\n", arr[0][0],arr[1][1],arr[2][2]);
	// in tong cac phan tu tren duong cheo chinh cua ma tran vuong
	int sum = arr[0][0] + arr[1][1] + arr[2][2];
	printf("Tong cac so tren duong cheo chinh cua ma tran la : %d\n", sum);
	return 0;	
}
