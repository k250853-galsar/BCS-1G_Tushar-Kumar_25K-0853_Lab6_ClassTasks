#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	int i, multi=0;
	for(i=1; i<=num2; i++){
		multi+=num1;
	}	
	printf("%d * %d = %d\n", num1, num2, multi);
	
	int temp, count=0, sub;
	sub=num1;
	if(num2==0){
		printf("%d / %d = undefined", num1, num2);
	}
	else{
		while(sub>=0){
			temp=num1;
			sub-=num2;
			count++;
			if(sub<num2){
				break;
			}
		}
		printf("%d / %d = %d\n", num1, num2, count);
	}
	
	

	
	return 0;
}
