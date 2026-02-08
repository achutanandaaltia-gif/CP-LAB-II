/*How can you implement a program to count the number of vowels in a string?*/
#include<stdio.h>
#include<string.h>
int main()
{
    char vol[100];
    int i,count=0;
    printf("enter string\n");
    gets(vol);
    for(i=0;vol[i]!=0;i++)
    if(vol[i]=='a'||vol[i]=='e'||vol[i]=='i'||vol[i]=='o'||vol[i]=='u'||
        vol[i]=='A'||vol[i]=='E'||vol[i]=='I'||vol[i]=='O'||vol[i]=='u')
    {
        count++;
 
    }

    {
        printf("the vowels  number is %d\n",count);
    }

}
