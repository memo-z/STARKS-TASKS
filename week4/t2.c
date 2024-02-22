#include <stdio.h>
#include <stdlib.h>

void read_array(int (*arr)[5]);
void row_sum(int (*arr)[5]);
void column_sum(int (*arr)[5]);


int main() {
    int arr[5][5];
    printf("Enter a 5x5 array:\n");
    read_array(arr);
    printf("sum of rows:\n");
    row_sum(arr);
    printf("sum of columns:\n");
    column_sum(arr);
    
    return 0;
}

void read_array(int (*arr)[5]) {
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void row_sum(int (*arr)[5]){
	int sum;
	for(int i=0;i<5;i++){
		for(int j=0 ; j<5; j++){
			
			sum+=arr[i][j];
			
		}
		printf("sum of row %d is %d\n",i,sum);
		sum=0;
	}
	
}
void column_sum(int (*arr)[5]){
	int sum;
	for(int j=0;j<5;j++){
		for(int i=0 ; i<5; i++){
			
			sum+=arr[i][j];
			
		}
		printf("sum of column %d is %d\n",j,sum);
		sum=0;
	}
	
}