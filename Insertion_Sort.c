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
