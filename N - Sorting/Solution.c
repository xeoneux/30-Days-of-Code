#include<stdio.h>
int main(){

	int i, j, n, temp, swap=0; //Variable Declaration
	scanf("%d", &n);
	int arr[n]; //Array Declaration

	for(i=0;i<n;i++){
		scanf("%d", &arr[i]); //Input Elements Into Array 
	}
	for(i=0;i<n;i++){ 
		for(j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j]; //Sorting The Elements Of The Array
				arr[j] = temp;
				swap++;	
			}
		}
	}
    //Output
	printf("Array is sorted in %d swaps.\n", swap);
	printf("First Element: %d\n", arr[0]);
	printf("Last Element: %d\n", arr[n-1]);
	return 0;
}
