#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int height;
    loop:
    printf("Please enter a height: ");
    scanf("%d", &height);
    if(height < 0 || height > 9)
    {
     goto loop;
     } 
    for (int i = height; i >= 1; i--)
    {
        for (int space = 1; space < i; space++)
        {    
          printf(" ");
  	}
	for (int hash = height; hash >= i-1; hash--)
	{         
   	  printf("#");
	} 
        printf(" ");
	for (int hash = height; hash >= i-1; hash--)
	{         
   	  printf("#");
	} 
        for (int space = 1; space < i; space++)
        {    
          printf(" ");
  	}          
	printf("\n");
    }
}
