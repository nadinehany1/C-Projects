  #include <stdio.h>
  
  int main(void)
  {
	  /*int a, b;
	  printf("Please Enter 1st Number : ");
	  scanf("%d", &a);
	  printf("Please Enter 2nd Number : ");
	  scanf("%d", &b);
	  
	  
	  printf("%d", a==b);*/
	  
	  int h, sal;
	  printf("Please Enter Your Working Hours : ");
	  scanf("%d", &h);
	  
	  sal = h*50;
	  if(h<40)
	  {
		printf("Your Salary Is: %d", sal-(0.1*sal));
	  }
	  if(h>=40)
	  {
		printf("Your Salary Is: %d", (h*50));
	  }
	  
	  return 0;
  }