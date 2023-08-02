  #include <stdio.h>
  
  int main(void)
  {
	  int n1, n2, n3;
	  
	  printf("Plese Enter Number 1: ");
	  scanf("%d",&n1);
	  printf("Plese Enter Number 2: ");
	  scanf("%d",&n2);
	  printf("Plese Enter Number 3: ");
	  scanf("%d",&n3);
	  
	  
	  if((n1>n2)&&(n1>n3))
	  {
		  printf("The Max Number Is Number 1 And Equal %d",n1);
	  }
	  else if((n2>n1)&&(n2>n3))
	  {
		  printf("The Max Number Is Number 2 And Equal %d",n2);
	  }
	  else
	  {
		  printf("The Max Number Is Number 3 And Equal %d",n3);
	  }
	  
	  return 0;
  }