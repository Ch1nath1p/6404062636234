#include <stdio.h>
int main(){
	float p1,p2,p3;
	printf("Product_1_piece\n");
	scanf("%f",&p1);
	printf("Discount = %f\n",p1-(0.05*p1));
	printf("Product_2_piece\n");
	scanf("%f %f",&p1,&p2);
	printf("Discount = %f\n",p1+p2-((p1+p2)*0.15));
	printf("Product_3_piece\n");
	scanf("%f %f %f",&p1,&p2,&p3);
	printf("Discount = %f",p1+p2+p3-((p1+p2+p3)*0.30));
}
