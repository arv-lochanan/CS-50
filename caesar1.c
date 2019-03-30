#include<stdio.h>
 
int main()
{
	char m[1000], ch;
	int i, k;
	
	printf("Enter a message to encrypt: ");
	scanf("%s",m);
	printf("Enter key: ");
	scanf("%d", &k);
	
	for(i = 0; m[i] != '\0'; ++i){
		ch = m[i];
		
		if(ch >= 'a' && ch <= 'z')
		      {
			ch = ch + k;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			m[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		       {
			ch = ch + k;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			m[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", m);
	
	return 0;
}
