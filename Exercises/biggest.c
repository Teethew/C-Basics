#include<stdio.h>

/*Write a recursive function that receives an array of doubles and returns the
biggest number present in this array:
maior = biggest number;
encontra_maior = finds the biggest;
double encontra_maior(double v[], int n)*/

double encontra_maior(double v[], int n);

int main(void){
	double v[]={0,3.5,7.2,-11,9};
	double maior = encontra_maior(v,5);
	printf("%.2lf \n",maior);
} 

double encontra_maior(double v[], int n){
	double maior;
	if (n==1) return v[0];
	else{
		maior = encontra_maior(v,n-1);
		if(maior < v[n-1]) maior = v[n-1];
		else return maior;
	}
}
