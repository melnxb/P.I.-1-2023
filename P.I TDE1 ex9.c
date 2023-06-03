#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    int interv_1_25 = 0,interv_26_50 = 0,interv_51_75 = 0,interv_76_100 = 0;

    srand(time(NULL));
     for(int i=0; i<100; i++){
        num= rand() %100 + 1; //conta ate 99 +1

        if(num >= 1 && num <= 25){
            interv_1_25++;
        }else if(num >= 26 && num <= 50){
            interv_26_50++;
        }else if(num >= 51 && num <= 75){
            interv_51_75++;
        }else if(num >= 76 && num <= 100){
            interv_76_100++;
        }
    }
    printf("A quantidade de números sorteados entre 1 e 25 foi: %d\n", interv_1_25);
    printf("A quantidade de números sorteados entre 26 e 50 foi: %d\n", interv_26_50);
    printf("A quantidade de números sorteados entre 51 e 75 foi: %d\n", interv_51_75);
    printf("A quantidade de números sorteados entre 76 e 100 foi: %d\n", interv_76_100);

    return 0;
}
