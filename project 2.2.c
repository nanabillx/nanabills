#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n, d5, d4, d3, d2, d1;
long int revnum; 
printf("enter a five digit number(less than 32767): ");
scanf("%d", &n);
d5= n%10;
n=n/10;
d4=n%10;
n=n/10;
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
























	return 0;
		}
