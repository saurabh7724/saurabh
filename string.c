#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,p,q,sum=0;
	int mat_1[10][10],mat_2[10][10],result[10][10];
	printf("Dimesions of the matrix 1, mxn\n");
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++) // matrix 1
	{
		for(int j=0;j<n;j++)
		{
			printf("m[%d%d]:",i,j);
			scanf("%d",&mat_1[i][j]);
		}
	}
	printf("Dimesions of the matrix 2, pxq\n"); // matrix 2
	scanf("%d %d",&p,&q);
	for(int l=0;l<p;l++)
	{
		for(int k=0;k<q;k++)
		{
			printf("m[%d%d]:",l,k);
			scanf("%d",&mat_2[l][k]);
		}
	}
	if(n!=p) // check the condition for valid multiplication
	{
		printf("Invalid Operation\n");
		return 0;
	}
	for(int c=0;c<m;c++)
	{
		for(int a=0;a<q;a++) 
			{
				for(int b=0;b<p;b++)
					sum=sum+mat_1[c][b]*mat_2[b][a];
				result[c][a]=sum;
				sum=0;
			}
	}
	for(int i=0;i<m;i++)
	{
		printf("\n[");
		for(int j=0;j<q;j++)
		{
			printf(" %d ",result[i][j]);
		}
		printf("]");
	}
	return(1);
}