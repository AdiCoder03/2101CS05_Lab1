#include <math.h>
#include <stdio.h>

void swap(int * x, int * y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void Selection_Sort()
{
  //accepting the size and the elements of the array to be sorted
	int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array separated by spaces(they must be integers): ");
  for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

  //performing selection sort on the array taken as input from the user
  int m_id;
  for (int i = 0; i < n-1; i++)
  {
      m_id = i;
      for (int j = i+1; j < n; j++) {
        if (arr[j] < arr[m_id])
          m_id = j;
      }
      swap(&arr[m_id], &arr[i]);
  }

  //displaying the sorted array
  printf("The sorted array is as follows: ");
  for(int i = 0; i<n; i++) printf("%d ", arr[i]);
  printf("\n");
}
