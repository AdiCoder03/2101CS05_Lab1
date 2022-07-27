#include <stdio.h>

void swap(int * x, int * y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main()
{
  //accepting the size and the elements of the array to be sorted
	int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array separated by spaces(they must be integers): ");
  for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

  //performing bubble sort on the array taken as input from the user
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
    }
  }

  //displaying the sorted array
  printf("The sorted array is as follows: ");
  for(int i = 0; i<n; i++) printf("%d ", arr[i]);
  printf("\n");

	return 0;
}
