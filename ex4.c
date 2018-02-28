#include <stdio.h>

int main (void) {
	int *p1,*p2;
	int A[5];
	int n;
	int aide;

	
	puts("donner les dimensions n et m :");
	scanf("%d",&n);
   

	for (p1=A ;p1<A+n-1;p1++)
	{
		puts("donner un entier :");
		scanf("%d", p1);
	}

    for (p1=A ;p1<A+n-1;p1++)
	{
		printf("%d\n", *p1);
	}
	 
     for (p1=A ;p1<p2;p1++)
	{
    for (p2=A+n-1 ;p2<A+n;p2--)
	{
                     aide= *p1;
			*p1=*p2; 
			*p2=aide;
		}
	
	}
 for (p1=A; p1<A+n-1; p1++)
	{
      printf("%d ", *p1);
  printf("\n");
	}
	return 0;
}
