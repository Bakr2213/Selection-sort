#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    int max;
	                               // 0  1  2  3  4  5
	for (int i = 0; i < n-1; i++) // 60 40 50 30 10 20
	{
		max = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] > arr[max])
				max = j;
		}
		swap(arr[max], arr[i]);
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 0,-40,50,30,10,20 };
	int n = sizeof(arr) / sizeof(arr[0]); // 6*4 = 24   / 4 = 6
	SelectionSort(arr, n);
	cout << "array after selection sort : \n";
	print(arr, n);
}

