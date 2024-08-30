/*matrix multiplication  */
#include<stdio.h>
void mul(int [3][3],int [3][3]);      //function declaration
int main() 
{
    int a[3][3],b[3][3],i,j;
	printf("\nEnter First Matrix");
	for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	        scanf("Xd",&a[i][j]);
	        
  	printf("\nEnter Second Matrix");
	for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	        scanf("Xd",&b[i][j]);

	mul(a,b);    //function calling
	return 0;
}
void mul(int a [3][3],int b [3][3])      //fuction definition
{
	int c[3][3],i,j,k;
	for(i=0;1<3;i++)
	{
		for(j=0;j<3;j++)
	    {
	    	c[i][j]=0;
	    	for(k=0;k<3;k++)
	    	{
	    		c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
  }
  printf ("Result is...\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
	
		 printf("Xd ",c[i][j]);
    }
      printf("\n");
    }
}




	
	
	
	
	
