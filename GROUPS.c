#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void) {
    int t = 0;
    scanf("%d", &t);
    int k = 1;
    int group = 0;
    while(k <= t){
        group = 0;
        char *thingy= (char*)malloc(100000*sizeof(char));
        scanf("%s", thingy);
        k++;
        while(*thingy != '\0'){
            if(*thingy == '1'){
                group++;
                thingy++;
                while(*thingy == '1'){
                    thingy++;

                }
            }


            thingy++;
        }

        free(*thingy);

        printf("%d \n", group);

    }

    return 0;
}

