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
    printf("La cha�ne \"%s\" est un palindrome.\n", ch);
 else
    printf("La cha�ne \"%s\" n'est pas un palindrome.\n", ch);
 return 0;
}
