#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main- prints the multiplication of the two integers
 * @agrv: argument cout
 * @argv: argmunet vectors
 * Return: 0 if true, 1 if false
 */
int main(intargc,char*argv[])
{
int a,b;
if(argc==3)
{
a=atoi(argv[1]);
b=atoi(argv[2]);
printf("%d\n", a*b);
return(0);
}
printf("ERROR\n");
return(1);
}
