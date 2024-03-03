# include <stdio.h>
void rev(int arr[], int n);
int main(){
	int arr[5];
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    rev(arr, 5);

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
	
	
	return 0;
}

void rev(int arr[], int n){
	for(int i=0; i<n/2; i++){
		int temp = arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
		
	}
	
}
