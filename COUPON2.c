#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
int sum(int members[3]){
    int  sum = 0;
    for(int i = 0; i < 3 ; i++){
        sum += members[i];

    }

    return sum;
}

int main(void){
    int test_cases = 0;
    scanf("%d", &test_cases);
    int d = 0, c = 0;
    int k = 1;
    while(k <= test_cases){
        scanf("%d %d", &d,&c);

        int orders_dayone[3];
        int orders_daytwo[3];
        scanf("%d %d %d", &orders_dayone[0], &orders_dayone[1], &orders_dayone[2]);
        scanf("%d %d %d", &orders_daytwo[0], &orders_daytwo[1], &orders_daytwo[2]);
        int sum_togehter = sum(orders_daytwo) + sum(orders_dayone);
        int sum_withdeliery = sum_togehter + 2*d;
        int sum_withcoupon = sum_togehter;
        bool coupon_used = false;
        if(sum(orders_dayone) >= 150){

            sum_withcoupon += c;
            coupon_used = true;
        }
        if(sum(orders_daytwo) >= 150 && !coupon_used ){
            sum_withcoupon += c;

        }
        if(sum(orders_daytwo) < 150){
            sum_withcoupon += d;
        }
        if(sum(orders_dayone) < 150) {
            sum_withcoupon +=d;
        }


        if(sum_withcoupon < sum_withdeliery){
            printf("YES \n");

        }else{
            printf("NO \n");

        }

        k++;
        sum_togehter = 0;
        sum_withdeliery = 0;
        sum_withcoupon = 0;
        coupon_used = false;
    }
    return 0;
}