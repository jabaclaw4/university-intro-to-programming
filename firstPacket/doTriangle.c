#include <stdio.h>
#include <math.h>
double vector(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    printf("enter coordinates of point 1 ");
    scanf("%lf %lf", &x1, &y1);
    printf("enter coordinates of point 2 ");
    scanf("%lf %lf", &x2, &y2);
    printf("enter coordinates of point 3 ");
    scanf("%lf %lf", &x3, &y3);
    a = vector(x1,y1,x2,y2);
    b = vector(x2,y2,x3,y3);
    c = vector(x3,y3,x1,y1);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("%d", 1);
    }
    else printf("%d", 0);
    return 0;
}