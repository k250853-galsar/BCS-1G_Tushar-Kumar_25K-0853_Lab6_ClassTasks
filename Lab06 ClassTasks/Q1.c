#include<stdio.h>

int main(){
	int n;
	printf("Enter a range number: ");
	scanf("%d", &n);
	int i;
	for(i=n; i>=1; i--){
		printf("%d ", i);
	}
	
	return 0;
}


