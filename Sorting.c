#include <math.h>
#include <stdio.h>

void swap(int * x, int * y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void Insertion_Sort()
{
  //accepting the size and the elements of the array to be sorted
	int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array separated by spaces(they must be integers): ");
  for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

  //performing insertion sort on the array taken as input from the user
  for (int i = 1; i < n; i++) {
		int j = i - 1;
    int val = arr[i];
		while (j >= 0 && arr[j] > val) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = val;
	}

  //displaying the sorted array
  printf("The sorted array is as follows: ");
  for(int i = 0; i<n; i++) printf("%d ", arr[i]);
  printf("\n");
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

void Bubble_Sort()
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

void Merge_Sort()
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
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = (l - 1);
  for (int j = l; j < r; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[r]);
  return (i + 1);
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

void Quick_Sort()
{
    //accepting the size and the elements of the array to be sorted
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array separated by spaces(they must be integers): ");
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);
    
    quickSort(arr, 0, n-1);  

    //displaying the sorted array
    printf("The sorted array is as follows: ");
    for(int i = 0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
}