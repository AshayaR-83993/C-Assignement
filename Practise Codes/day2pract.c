#include<stdio.h>

int main(){
	/*int num;
	  printf("enter a num :");
	  scanf("%d",&num);

	  printf("num is %d",num);
	  printf("adress is %d,&num");
	  return 0;
	  }


	  int a1,b1,c1,d1;

	  printf("enter your desired numbers");

	  int k = scanf("%d%d%d%d",&a1,&b1,&c1,&d1);

	  printf("k is %d",k);

	  printf("a1 = %d\nb1=%d\nc1=%d\nd1=%d",a1,b1,c1,d1);

	  return 0;

	  }*/

int n1;
char c1;
float f1;
double d1;

printf("int size : %u \n ",sizeof(n1));
printf("Char size : %u \n ",sizeof(c1));
printf("float size : %u \n ",sizeof(f1));
printf("Double size : %u \n ",sizeof(d1));


printf("int size : %d \n ",sizeof(n1));
printf("Char size : %d \n ",sizeof(c1));
printf("float size : %d \n ",sizeof(f1));
printf("Double size : %d \n ",sizeof(d1));

printf("int size : %u \n ",sizeof( 5 ));  // 4
printf("Char size : %u \n ",sizeof( 'A' )); // 1 Or 4
printf("float size : %u \n ",sizeof( 3.142f ) );//4
printf("float size : %u \n ",sizeof( 3.142 ) );//8
printf("Double size : %u \n ",sizeof( 8.56 )); // 8

return 0;

}

