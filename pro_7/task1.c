#include <stdio.h>

int calSum(int arr[], int s) {
	int sum = 0;
	for (int i = 0; i < s; i++) {
		sum += arr[i];
	}
	return sum;
}

main(){
	int s;
	printf("Enter the size of the array: ");
	scanf("%d", &s);

	int arr[s];
	printf("Enter %d elements:\n", s);
	for (int i = 0; i < s; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = calSum(arr, s);
	printf("Sum of array elements: %d\n", sum);

}