#include <math.h>
#include <stdio.h>
int main()
{
	int arr[] ={30,16,14,2,9,18,5,3} I,j n i,j,key;
	for (i = 1; i < n; i++) 
{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
for (i = 0; i < n; i++)
{
		printf("%d \t", arr[i]);
	}
}
