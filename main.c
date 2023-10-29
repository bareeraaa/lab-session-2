#include <stdio.h>

int main()
{
    int i=1;
	int n;
	int s=0;
	printf("Enter the value of N: ");
	scanf("%d",&n);
    printf("Odd Numbers from 1 to %d:\n",n);

	while(i<=n)
	{
            if(i%2 != 0){
			printf("%d ",i);
			s=s+i;
            }

            i++;
	}
printf("\n");
printf("%d",s);
	return 0;
}


