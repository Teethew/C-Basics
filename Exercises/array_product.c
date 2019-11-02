#include <stdio.h>

/*Read two double arrays of size n;
Calculate the product point-to-point of these two arrays.*/

void arrayReader(double array[], int n);
void productPrinter(double vet1[], double vet2[], int n);
double product;

int main(void) {
	int n;
	printf("Type the size of the array \n");
	scanf("%d",&n);

	double array1[n];
 	double array2[n];
	
	printf("Type the values for the array 1\n");
  	arrayReader(array1, n);
	printf("Type the values for the array 2\n");
  	arrayReader(array2, n);
	productPrinter(array1, array2, n);
	printf("\n");
	return 0;
}

void arrayReader(double vet[], int n){
	for(int i=0;i<n;i++){
    		scanf("%lf", &vet[i]);
  }
}
void productPrinter(double vet1[], double vet2[], int n){
  printf("Array 1*Array 2 = \n");
  printf("[ ");
	for(int i=0;i<n;i++){
		product = (vet1[i]*vet2[i]);
		printf("%.2lf ",product);  
  }
  printf("]\n");
}
