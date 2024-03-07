#include<stdio.h>

int main(){

int n1,n2;
char c1,c2;
float f1,f2;
double d1,d2;

printf("enter your desired number :" );
scanf("%d%d",&n1,&n2);

printf("integer : n1 = %d n2 = %d\n",n1,n2);
printf("adress : n1 = %u n2 = %u\n",&n1,&n2);

 printf("enter your desired charecter :" );
  scanf("%c%c",&c1,&c2);
  
  printf("integer :c1 = %c c2 = %c\n",c1,c2);
  printf("adress : c1 = %u c2 = %u\n",&c1,&c2);

printf("enter your desired float :" );
   scanf("%f%f",&f1,&f2);
      
    printf("integer :f1 = %f f2 = %f\n",f1,f2);
   printf("adress : f1 = %u f2 = %u\n",&f1,&f2);

printf("enter your desired double :" );
    scanf("%lf%lf",&d1,&d2);
 
    printf("integer :d1 = %lf d2 = %lf\n",d1,d2);
    printf("adress : d1 = %u d2 = %u\n",&d1,&d2);

	return 0;

	}

