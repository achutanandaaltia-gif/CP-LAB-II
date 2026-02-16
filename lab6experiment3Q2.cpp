/*How can you define a structure to store a date (day, month, year) and display it
in the format DD/MM/YYYY?*/
#include<stdio.h>
struct data
{
	int dd,mm,yyyy;
};
main()
{
struct data d;
printf("enter day\n");
scanf("%d",&d.dd);
printf("enter month\n");
scanf("%d",&d.mm);
printf("enter year\n");
scanf("%d",&d.yyyy);
printf("format data\n");
printf("%d/%d/%d",d.dd,d.mm,d.yyyy);
}

