#include <stdio.h>
#include <math.h>

float Edistance(int x1, int x2, int y1, int y2)
{
    int a, b, c;
    x2 = x2 - x1;
    b = pow(x2, 2);

    y2 = y2 - y1;
    c = pow(y2, 2);

    a = b + c;
    return sqrt(a);
}

float areaOfCircle(int x1, int x2, int y1, int y2, float (*distance)(int x1, int x2, int y1, int y2))
{
    return distance(x1, x2, y1, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dist;
    printf("Enter value of x1\n");
    scanf("%d", &x1);
    printf("Enter value of x2\n");
    scanf("%d", &x2);
    printf("Enter value of y1\n");
    scanf("%d", &y1);
    printf("Enter value of y2\n");
    scanf("%d", &y2);
    // printf("Euclidian distance is %lf\n", sqrt(4));
    dist = areaOfCircle(x1, x2, y1, y2, Edistance);
    printf("Euclidian distane is %.2f\n", dist);
    
    return 0;
}