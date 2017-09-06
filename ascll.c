#include <stdio.h>

int main(){
	unsigned char c;		
	
	c=32; 
	while(c<=127)
  {
		printf("%c [%03d] ",c,c);
		c++;
	}
	printf("\n");
	return 0;
}
