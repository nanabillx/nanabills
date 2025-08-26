#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("enter sides of a triangle: ");
    if (scanf("%lf %lf %lf, &a, &b, &c ) != 3) {
        fprintf(stderr, "Invalid input. \n");
        return 1;
}
 {   /* triangle inequality check */
    if (a <= 0 || b <= 0 || c= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        fprintf(stderr, "Not a valid triangle.\n");
        return 1;
}
	}  double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area of triangle = %.4f\n", area);
    return 0;
}
