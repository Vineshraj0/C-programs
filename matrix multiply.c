#include<stdio.h>


read_matrix(int a[10][10],int r1,int r2)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<r2;j++)
		{
			printf("[%d] [%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}


disp_matrix(int a[10][10],int r1,int r2)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<r2;j++)
		{
			
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


mul_matrix(int a[10][10],int b[10][10],int c[10][10],int r1,int r2,int c1,int c2)
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
	{
		c[i][j]=0;
	}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}





int main()
{
	int a[10][10],b[10][10],res[10][10],r1,r2,c1,c2;
	
	printf("Enter the number of rows    of 1st Matrix: ");
	scanf("%d",&r1);
	printf("Enter the number of columns of 1st Matrix: ");
	scanf("%d",&c1);
	printf("Enter the number of rows    of 2nd Matrix: ");
	scanf("%d",&r2);
	printf("Enter the number of columns of 2nd Matrix: ");
	scanf("%d",&c2);
	
	if(c1==r2)
	{
		printf("Enter the details of 1st Matrix \n");
		read_matrix(a,r1,c1);
		printf("Enter the details of 2nd Matrix \n");
		read_matrix(b,r2,c2);
		printf("1st matrix is:\n");
		disp_matrix(a,r1,c1);
		printf("2nd matrix is:\n");
		disp_matrix(b,r2,c2);
		mul_matrix(a,b,res,r1,c1,r2,c2);
		printf("Resultant matrix is:\n");
		disp_matrix(res,r1,c2);
	}
}
