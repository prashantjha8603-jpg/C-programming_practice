#include <stdio.h>
int main()
{
    float m1 = 46; // maths marks
    float m2 = 66; // physics marks
    float m3 = 54; // chemistry marks
    float m4 = 56; // english marks
    float m5 = 83; // hindi marks
    float p = (m1 + m2 + m3 + m4 + m5) / 550 * 100;
    printf("%f percent", p);
    return 0;
}