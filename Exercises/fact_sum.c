#include<stdio.h>

/*Read 2 integers n and m. Calculate and
show the sum of their factorials.*/

int FactSum(int n, int m);
int Fact(int n);
int main(void){
	int n;
	int m;
	int sum;
  printf("Type n: ");
	scanf("%d", &n);
  printf("Type m: ");
	scanf("%d", &m);
	sum = FactSum(n,m);
	printf("The sum of the factorials n! and m! is: %d \n", sum);
}
int Fact(int n){
	if(n==0) return 1;
	else
		return n*Fact(n-1);
}
int FactSum(int n, int m){
	int sum = 0;
	if(n&&m == 0) return 1;
	else {
		int sum = Fact(n)+Fact(m);
		return sum;	
	}
}
