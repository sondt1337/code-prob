#include <stdio.h>
#include <math.h>
int main () {
    float a, b;
    float d;
    char c;
    scanf ("%f %c %f", &a, &c, &b);
    switch (c)
    {
    case '+':
        if (abs(d)<=1000) {
            printf ("%.2f",a+b);
        }else printf ("Math Error");
        break;
    case '-':
        d=a-b;
       if (abs(d)<=1000) {
            printf ("%.2f",a-b);
        }else printf ("Math Error");
       break;
    case '*':
        d=a*b;
       if (abs(d)<=1000) {
            printf ("%.2f",a*b);
        } else printf ("Math Error");
        break;
    case '/':
        if (b==0) {
            printf ("Math Error");
        } else if (b!=0){
            d=a/b;
            if (abs(d)<=1000){
                printf ("%.2f",a/b);
            } else printf ("Math Error");
        }
        break;
    }}
