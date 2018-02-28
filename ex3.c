#include <stdio.h>

int main (void)
{
 
 int A[50], B[30]; 
 int n,m;    
 int *PA,*PB; 
 
  puts("Dimension du tableau A : ");
 scanf("%d", &n);

 for (PA=A; PA<A+n-1; PA++)
     {
      printf("donner un entier :");
      scanf("%d", PA);
     }

  printf("Dimension du tableau B ( : ");
 scanf("%d", &m );

 for (PB=B; PB<B+m-1; PB++)
     {
      printf("donner un entier :");
      scanf("%d", PB);
     }

 for (PA=A; PA<A+n-1; PA++)
	{
      puts("%d ", *PA);
  }
 
 for (PB=B; PB<B+m-1; PB++)
	{
      puts("%d ", *PB);
	}
  
 for (PA=A+n ,PB=B ; PB<B+n-1 ; PA++,PB++)
	{
      *PA = *PB;
 
n += m; 
  
 for (PA=A; PA<A+n-1; PA++)
      puts ("%d ", *PA);

 return 0;
}

