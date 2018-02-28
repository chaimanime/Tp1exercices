#include <stdio.h>
#include <string.h>
int main (void)
{

 char ch[51];  
 char *p1,*p2;  
  int Pali,n;
 
 
puts("donner une chaine :");
 gets(ch);
	n=strlen(ch);
 
 Pali=1;
for (p1=ch ;p1<p2;p1++)
	{
    for (p2=ch+n-1 ;p2<ch+n;p2--)
	{
         
      if (*p1 != *p2) 
	Pali=0;
		}
	}
  
 if (Pali)
    printf("La chaîne \"%s\" est un palindrome.\n", ch);
 else
    printf("La chaîne \"%s\" n'est pas un palindrome.\n", ch);
 return 0;
}
