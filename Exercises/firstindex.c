#include <stdio.h>
#include <stdlib.h>

/*Write a program as described below:
1. Read a integers array of length n (n is going to be specified by the user);
2. Print the array;
3. Read a number to be inserted; This number is going to be inserted at 
the first index of the array. So, the last element will be removed of the array;
4. Print the array after the insertion.*/

void reverseReader(int vec[], int n);
void arrayPrinter(int vec[], int n);

int main(void) {
	int n;
	printf("Type the length of the array \n");
	scanf("%d",&n);

	int array1[n];

	reverseReader(array1, n);
	arrayPrinter(array1, n);
	int m;
	printf("Type a number \n");
	scanf("%d", &m);

	for (int k = n-1; k >= 0; k--)
		array1[k] = array1[k-1];
	array1[0] = m;

	arrayPrinter(array1, n);  
	return 0;
}

void reverseReader(int vec[], int n){
	for (int i = 0; i < n; i++) {
		int number = rand()%10000;

		int k;
		for (k = i; k > 0; k--)
			vec[k] = vec[k-1];
		vec[0] = number;
	}
  }
void arrayPrinter(int vec[], int n){
	printf("\nNow, the array looks like this:{");
	for(int i = 0; i<n-1; i++){
		printf("%d,",vec[i]);
  	}
	printf("%d}\n",vec[n-1]);
}
