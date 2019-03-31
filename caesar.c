#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if(argc!=2)

	  {
		printf("Error! Need exactly one argument");
		return 1;
	   }

	int k;
	k= atoi(argv[1]);
	char p[1000]={0},c[1000]={0},ch;
	printf("Please enter the plain text: \n");
	scanf("%[^\n]%*c", p);
	
	while(k>26)
	{
	  k=k-26;
	 }

	for(int i=0; p[i]!='\0'; i++)
	{
		ch=p[i];
		if(ch>='a' && ch<='z')
		 {
			ch=ch+k;

			if(ch>'z')
			{
			  ch=ch-'z' + 'a' - 1;
			 }
			c[i]= ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + k;
			
			if(ch > 'Z')
			{
			  ch = ch - 'Z' + 'A' - 1;
			 }
			
			c[i] = ch;
		}
		else
		{
			c[i]= ch;
		}
	}

	printf("Please find your encrypted message:\n");

	printf("%s", c);

	printf("\n");

	return 0;
}
