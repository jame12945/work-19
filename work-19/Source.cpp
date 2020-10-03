#include<iostream>
int i,n, j,x1,x2=0,y,z,a,b;//(n*n+1*(2*n)+1)/6
int value1() {
	scanf_s("%d", &n);

	for (i= 1; i<= 3; i++) {
		for (j = 1; j <= (n / n) + 2; j++) {
			if(j==3)
			printf("*\n");
			
			}
	
			y = (n * (n + 1) * ((2 * n) + 1))/ 6;
		}
	printf("T H E\n");
	printf(" A N S W E R\n");
	printf("          I S\n");
	printf("              %d\n", y);
	return y;
	
	}


int value2() {
	scanf_s("%d", &x1);
	for (a = 1; a <= 3; a++) {
		for (b= 1; b <= (n / n) + 2; b++) {
			if (j == 3)
			printf("*\n");
			}
			x2 = ((x1 * (x1 + 1)) / 2) * ((x1 * (x1 + 1)) / 2);
		}

	printf("T H E\n");
	printf(" A N S W E R\n");
	printf("          I S\n");
	printf("               %d\n", x2);
	return x2;
	}



int main() {
	value1();
	value2();
	
	z = x2 - y;
	printf("The final answer is %d", z);
}