#include <stdio.h>
#include <math.h>

int main() {

    double r = 0; 
    scanf("%lf", &r);

    double result = 0; 
    double P = 21500;
    double V = (4.0 / 3) * M_PI * r * r * r;

    result = round(P * V);

    printf("%.0lf", result);

    return 0; 
}