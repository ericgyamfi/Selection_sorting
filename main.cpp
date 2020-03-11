#include <iostream>

using namespace std;

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_num;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_num = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_num])
			min_num = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_num], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//  program to test above functions
int main()
{
     cout<<"Program to implement selection sorting"<<endl;
    cout<<"<--------------------------------------->"<<endl;

	int arr[] = {43, 45, 34, 12, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted Data display : \n";
	printArray(arr, n);
	return 0;
}
