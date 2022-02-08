#include <stdio.h>
#include <math.h>
// function to calculate hypotenuse
double hypotenuse(double s1, double s2)
{
    double hy_s = sqrt(pow(s1,2) + pow(s1,2));
    return hy_s;

}
// main function
int main()
{
    double s1,s2;
    printf("\nGoing to calculate hypotenuse");
    // read side' from user
    printf("\nEnter two sides of Triangle :");
    scanf("%lf %lf",&s1,&s2);
    // calling hypotenuse() to display hypotenuse
    printf("hypotenuse is %lf",hypotenuse(s1,s2));
}
