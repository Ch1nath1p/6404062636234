#include <stdio.h>
int main(){
	float commission=5000.00;
	float percent=0.05;
	int no_of_day=7;
	char x='%';
	printf("rate:%8.2f%c\n",percent,x);
	printf("comm  :%7.2f\n",commission);
	printf("no.of day:%ddays",no_of_day);
}
