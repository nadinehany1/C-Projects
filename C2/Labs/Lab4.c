  #include <stdio.h>
  
  int main(void)
  {
	  int x=7 ,y=4;
	  
	  printf("x = 7\ny = 4 \n");
	  
	  printf("z = x & y = %d\n", x&y);
	  printf("k = x | y = %d\n", x|y);
	  printf("m = x ^ y = %d\n", x^y);
	  printf("L = x >> 1 = %d\n", x>>1);
	  printf("N = y << 2 = %d\n", y<<2);
	  
	  return 0;
  }