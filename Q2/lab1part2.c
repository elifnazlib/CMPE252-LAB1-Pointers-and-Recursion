#include <stdio.h>
#include <math.h>

void isInCircle(int *result, double *centerX, double *centerY)
{
    double cirX, xP;
    double cirY, yP;
    double cirRad;
    double distance;
    double totalX = 0, totalY = 0;
    int count = 0;

    scanf("%lf %lf %lf", &cirX, &cirY, &cirRad);
    while (scanf("%lf %lf", &xP, &yP) != EOF) {
        totalX = totalX + xP;
        totalY = totalY + yP;
        count++;
    }
    *centerX = totalX / count;
    *centerY = totalY / count;

    distance = pow((*centerX - cirX),2) + pow((*centerY - cirY),2);

    if (distance < pow(cirRad,2))
        *result = 1;
    else if (distance == pow(cirRad,2))
        *result = 0;
    else if (distance > pow(cirRad,2))
        *result = -1;

}

int main()
{
    int result;
    double centerX, centerY;

    isInCircle(&result, &centerX, &centerY);

    if (result == 1)
        printf("center of points is inside circle, centerX: %.1f , centerY: %.1f",centerX,centerY );
    else if (result == 0)
        printf("center of points is on circle, centerX: %.1f , centerY: %.1f",centerX,centerY );
    else
        printf("center of points is outside circle, centerX: %.1f , centerY: %.1f",centerX,centerY);
    return 0;
}
