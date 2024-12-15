#include<stdio.h>

void doiCho(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main(){
	int n1 = 5;
	int n2 = 9;
	doiCho(&n1, &n2);
	
	printf("%d\n", n1);
	printf("%d", n2);
	return 0;
}
