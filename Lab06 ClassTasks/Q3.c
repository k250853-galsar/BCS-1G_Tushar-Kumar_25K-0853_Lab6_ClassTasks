#include<stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int d1, d2, count=0, num;
	num=n;
	for(n; n!=0; n=n/10){
		count++;
	}
	int div=1, i;
	for(i=1; i<count; i++){
		div*=10;
	}
	d1=num/div;
	d2=num%10;
	printf("Sum of first and last digit of %d = %d", num, d1+d2);
	
	return 0;
	
}
