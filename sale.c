#include <stdio.h>
/* 3 */
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

/* 4 */
int main(){
	float p1,P1,p2,P2,p3,P3,vat1,vat2,vat3;
	printf("Product_1_piece\n");
	scanf("%f",&p1);
	P1 = p1-(0.05*p1);
	printf("Discount = %f\n",P1);
	vat1 = P1*0.07;
	printf("vat = %f\n",P1+vat1);
	printf("Product_2_piece\n");
	scanf("%f %f",&p1,&p2);
	P2 = p1+p2-((p1+p2)*0.15);
	printf("Discount = %f\n",P2);
	vat2 = P2*0.07;
	printf("vat = %f\n",P2+vat2);
	printf("Product_3_piece\n");
	scanf("%f %f %f",&p1,&p2,&p3);
	P3 = p1+p2+p3-((p1+p2+p3)*0.30);
	printf("Discount = %f\n",P3);
	vat3 = P3*0.07;
	printf("vat = %f\n",P3+vat3);
}
