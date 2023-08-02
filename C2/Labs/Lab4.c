  #include <stdio.h>
  
  int main(void)
  {
	  int grade;
	  
	  printf("Please Enter Your Grade : ");
	  scanf("%d", &grade);
	  
	  if((grade<50)&&(grade>=0))
	  {
		  printf("You Failed!");
	  }
	  else if ((grade>=50)&&(grade<65))
	  {
		  printf("Normal");
	  }
	  else if ((grade>=65)&&(grade<75))
	  {
		  printf("Good");
	  }
	  else if ((grade>=75)&&(grade<85))
	  {
		  printf("Very Good");
	  }
	  else
	  {
		  printf("Excenlent");
	  }
	  	  
	  return 0;
  }