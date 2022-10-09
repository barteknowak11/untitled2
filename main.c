#include <stdio.h>

int main(void) {
    float x;

    printf("wprowadz \"x\" \n" );
    scanf("%f", &x);
    float y;
    y=(2*x*x*x)-((4*x*x))+3*x-7;
    printf("%f \n",y )

    return 0;
}
