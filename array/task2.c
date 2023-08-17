
#include <stdio.h>

main()
{

	int Arr[] = { 1, 2, 3, 4, 5 };

	int l = sizeof(Arr) / sizeof(Arr[0]);

	printf("The length of the array is: %d\n", l);

}
