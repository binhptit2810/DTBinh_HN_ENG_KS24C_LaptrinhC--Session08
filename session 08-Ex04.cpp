#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho mang 2 chieu 
	int arr[2][3]={{3,4,5},{7,8,9}};
	int max =0;
	// su dung vong lap de in ra phan tu lon nhat trong mang
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	
	}
	printf("Phan tu lon nhat trong mang la : %d", max);
	return 0;
	
}
