#include <stdio.h>
#include <stdint.h>
long  leastRazlika( long first,  long second);
long  find_largest_sum( long arr[],  long size){
    long first_biggest = 1;
    long second_biggest = 1;
    long first_part_of_exp = 1;
    for(long i = 0; i < size; i++){
        for(  long j = 0; j < size; j++){
            if(arr[i] * arr[j] > first_part_of_exp && i != j){
                first_biggest = arr[i];
                second_biggest = arr[j];
                first_part_of_exp = first_biggest * second_biggest;
            }
        }
    }
    return first_part_of_exp + leastRazlika(first_biggest,second_biggest);
}
long leastRazlika( long first,  long second){
    return ((first - second) > (second - first)) ? (first - second) : (second - first);
}
int main(void) {
    int t = 0;
    scanf("%d", &t);
    int k = 1;
    while(k <= t){
        long size = 0;
        scanf("%lu", &size);
        long arr[size];
        for( long i = 0; i < size; i++){
            scanf("%lld", &arr[i]);




        }



        printf("%lld \n", find_largest_sum(arr,size));
        k++;
    }

    return 0;
}

