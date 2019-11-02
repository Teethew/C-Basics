#include <stdio.h>

/*Write a program that reads a integer and
prints all dividers of this number (in this exercise, a divider is a number which divides the other and gets an integer as a result.)*/

int main(){

	int n;
	int i;
	printf("Type an integer: ");
	scanf("%d", &n);
	printf("The dividers of  %d are: \n", n);
  //We're using n/2 because it will be the biggest divisor
	for(i=1;i<=(n/2);i++){
		if (n%i == 0){
			printf("%d \n",i);
		}
	}
return 0;
}
