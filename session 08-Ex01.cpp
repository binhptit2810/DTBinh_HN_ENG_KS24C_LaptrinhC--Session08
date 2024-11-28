#include <stdio.h>

int main(){
	// khai bao mang va gan gia tri cho mang
	int arr[5]= {1,2,3,4,5};
	// in tung phan tu cua mang tu cuoi ve dau
	for(int i=4;i>=0;i--){
		printf("Phan tu cua mang tu cuoi ve dau la : %d\n",arr[i]);
	}
	return 0;
	
}
