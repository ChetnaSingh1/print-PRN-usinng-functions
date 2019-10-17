#include <stdio.h>
#include <stdlib.h>

long long int x;
long long int get_prn()
{
long long int PRN;
printf("Enter prn ");
scanf("%lld",&PRN);
return PRN;
}
int display_prn()		
{
printf("prn : %lld",x);
}
int main()
{
x=get_prn();		//calls function to take the input
display_prn();		//calls the function to print

}

