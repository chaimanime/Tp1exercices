#include <stdio.h>
#include <string.h>
int main(void)
{

 char ch[51]; 
 int i,j;      
 int pali,n;    
            

puts(" donner une chaine :");
 gets(ch);

 n=strlen(ch);

 for (i=0 ;  i<j ; i++)
	{
		for ( j=n ;  i<j ; j--)
		{
      if (ch[i] != ch[j])
          pali=0;
		}
	}
 
 if (pali)
    printf("La chaîne \"%s\" est un palindrome.\n", ch);
 else
    printf("La chaîne \"%s\" n'est pas un palindrome.\n", ch);
 return 0;
}
