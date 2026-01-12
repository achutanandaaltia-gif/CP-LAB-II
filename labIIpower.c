#include<stdio.h>
#include<math.h>


int power(int x, int y)
{
	if(y==0)
		return 1;
	else

		
	return x*power(x,y-1); 

}
int main ()
{
	printf("%d \n", power(2,3));
}
