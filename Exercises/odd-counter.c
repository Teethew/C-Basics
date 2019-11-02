#include<stdio.h>

void main(void){
	int n;
	int odd = 0;
	int even = 0;
	int var = 0;
	//Asks how many numbers will be analyzed
	printf("Type n: \n");
	scanf("%d",&n);
	printf("Type %d integers \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&var);
		if (var%2 == 0){
			even++;
		} else {
			odd++;
		}
	}
	printf("Even numbers: %d, odd numbers: %d \n",even,odd);
}
