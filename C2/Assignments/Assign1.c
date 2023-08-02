  #include <stdio.h>
  
  int main(void)
  {
	  int n1, n2, n3, n4, n5;
	  int n6, n7, n8, n9, n10;
	  
	  printf("Please Enter Number 1 : ");
	  scanf("%d", &n1);
	  printf("Please Enter Number 2 : ");
	  scanf("%d", &n2);
	  printf("Please Enter Number 3 : ");
	  scanf("%d", &n3);
	  printf("Please Enter Number 4 : ");
	  scanf("%d", &n4);
	  printf("Please Enter Number 5 : ");
	  scanf("%d", &n5);
	  printf("Please Enter Number 6 : ");
	  scanf("%d", &n6);
	  printf("Please Enter Number 7 : ");
	  scanf("%d", &n7);
	  printf("Please Enter Number 8 : ");
	  scanf("%d", &n8);
	  printf("Please Enter Number 9 : ");
	  scanf("%d", &n9);
	  printf("Please Enter Number 10 : ");
	  scanf("%d", &n10);
	  
	  int n;
	  printf("Please Number To Search For : ");
	  scanf("%d", &n);
	  
	  if(n==n1)
	  {
		  printf("The Number %d Is At Location 1",n1);
	  }
	  else if(n==n2)
	  {
		  printf("The Number %d Is At Location 2",n2);
	  }
	  else if(n==n3)
	  {
		  printf("The Number %d Is At Location 3",n3);
	  }
	  else if(n==n4)
	  {
		  printf("The Number %d Is At Location 4",n4);
	  }
	  else if(n==n5)
	  {
		  printf("The Number %d Is At Location 5",n5);
	  }
	  else if(n==n6)
	  {
		  printf("The Number %d Is At Location 6",n6);
	  }
	  else if(n==n7)
	  {
		  printf("The Number %d Is At Location 7",n7);
	  }
	  else if(n==n8)
	  {
		  printf("The Number %d Is At Location 8",n8);
	  }
	  else if(n==n9)
	  {
		  printf("The Number %d Is At Location 9",n9);
	  }
	  else if(n==n10)
	  {
		  printf("The Number %d Is At Location 10",n10);
	  }
	  else
	  {
		  printf("Doesn't Exist!");
	  }
	  
	  return 0;
  }