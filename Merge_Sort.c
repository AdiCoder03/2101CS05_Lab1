#include <stdio.h>

void swap(int * x, int * y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
    int m = l + (r - l) / 2; //avoids overflow for large r, l that may be caused if we use (l + r)/2
 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
 
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int Lt[n1], Rt[n2]; // temporary arrays to facililate the merge
 
    for (int i = 0; i < n1; i++)
        Lt[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        Rt[j] = arr[m + 1 + j];
 
    int i = 0; 
    int j = 0; 
    int k = l; 
    // Merging the temporary arrays into the original array
    while (i < n1 && j < n2) {
        if (Lt[i] <= Rt[j]) {
            arr[k] = Lt[i];
            i++;
        }
        else {
            arr[k] = Rt[j];
            j++;
        }
        k++;
    }
    
    //In case Lt has any remaining elements
    while (i < n1) {
        arr[k] = Lt[i];
        i++;
        k++;
    }
    
    //In case Rt has any remaining elements
    while (j < n2) {
        arr[k] = Rt[j];
        j++;
        k++;
    }
    }
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
  
  mergeSort(arr, 0, n-1);  

  //displaying the sorted array
  printf("The sorted array is as follows: ");
  for(int i = 0; i<n; i++) printf("%d ", arr[i]);
  printf("\n");

	return 0;
}
