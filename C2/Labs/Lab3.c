  #include <stdio.h>
  
  int main(void)
  {
	  int n;
	  printf("Please Enter Number : ");
	  scanf("%d", &n);
	  
	  if(n%2 == 0)
	  {
		printf("The Number is Even");
	  }
	  else //if (n!=0)
	  {
		printf("The Number is Odd");
	  }

	  
	  return 0;
  }