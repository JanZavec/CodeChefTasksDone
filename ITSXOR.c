#include <stdio.h>
#include <math.h>
long pow2roundup (long x)
{
    long test = pow(2,x);
    if (x < 0)
        return 0;
    --x;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x++;

    return x ;
}

int main(void) {
    long t = 0;
    scanf("%lu", &t );
    long k = 1;
    while(k<= t){
        long c = 0;
        scanf("%lu", &c);
        long d_2 = 0;
        for(long op = 0; op <= c; op++){
            d_2 = pow(2, op);
            if(d_2 > c ) break;

        }
        printf("test: %lu\n", d_2);
        printf("test: %lu \n", pow2roundup(c));

        long long sum = 0;


        for(long l = 0; l < d_2; l++  ){

            for(long l2 = l;l2 < d_2 ; l2++){



                if( (l^l2) == c  && (l*l2) > sum){

                    sum = (long long)l* (long long) l2;

                }
            }

        }
        printf("%llu \n", sum);
        k++;
    }

    return 0;
}

