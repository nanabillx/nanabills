#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float a, b, c, sp, area;
	
	pirntf("\n enter sides of a triangles: ");
	scanf("%f%f%f", &a, &b, &c);
	sp=(a + b+ c)/ 2;
    area= sqrt(sp * (sp-a) * (sp-b) * (sp-c));
	printf("Area of triangle = %f\n", area);
	
	
	

	
	
	
	return 0;
}
