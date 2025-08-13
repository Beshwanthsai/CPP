#include<stab.h>
#include <stdio.h>
int main()
{
    int p,t,r;
    scanf("%d %d %d", &p, &t, &r);
    float si = (p * t * r) / 100.0;
    printf("Simple Interest: %.2f\n", si);
    return 0;
}