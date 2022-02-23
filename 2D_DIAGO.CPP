#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,f=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter number [%d][%d]",i,j);
			scanf("%d\t",&a[i][j]);
		}
	}
	printf("\nmatrix is....\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j & a[i][j]==0)
			{
				f=1;
				break;
			}
			else if (i!=j & a[i][j]!=0)
			{
				f=1;
				break;
			}
		}
	}
	if(f==0)
		printf("matrix is dioganal matrix");
	else
		printf("matrix is not dioganal matrix");
	getch();
}


