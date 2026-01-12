#include<stdio.h>
void even( int i ,int n)
{

	
	if(i>n)
    printf("end ");	
	else 
	{
		if(i%2==0)
		printf("%d\n",i);
		 even(i+1,n);
	}

}
int main()
{
	 even( 10,20);
			}
