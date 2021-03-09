#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int N,H,x;
    int Time = 0;

    bool solveable = false;
    scanf("%d %d %d", &N, &H, &x);
    for(int j = 0; j < N; j++){
        scanf("%d", &Time);
        if((Time + x) >= H){
            solveable = true;
            break;
        }
        else
            continue;

        Time = 0;
    }
    if(solveable) printf("YES\n");
    else
        printf("NO\n");


    return 0;
}