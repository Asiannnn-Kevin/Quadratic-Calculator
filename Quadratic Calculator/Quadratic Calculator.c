#include <stdio.h>
#include <math.h>
#define _CRT_NO_WARNINGS_

int main (void) {

    double discrim, rt1, rt2, img_rt, rl_rt, fn_rt1, fn_rt2, a, b, c;

    printf("Please enter a, b, c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discrim = b*b-4*a*c;

    if (discrim > 0) {
        rt1 = (-b+sqrt(discrim))/(2*a);
        rt2 = (-b-sqrt(discrim))/(2*a);
        printf("root1 = %lf, root2 = %lf", rt1, rt2 );
    }  

    else if (discrim == 0) {
        rt1 = rt2 = -b/(2*a);
        printf("root1 = %lf, root2 = %lf", rt1, rt2);
    }

    else {
        rl_rt = -b/(2*a);
        img_rt = sqrt (-discrim)/(2*a);
        fn_rt1 = rl_rt + img_rt;
        fn_rt2 = rl_rt - img_rt;
        printf("root1 = %lf, root2 = %lf", fn_rt1, fn_rt2);
    }

    return 0;
}

    

