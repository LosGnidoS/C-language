#include <stdio.h>


int main(void){
    int x[10] = {1,4,34,53,1,92,4,8,2,44};
    int min = x[0];
    int max = x[0];

    for(int i = 0; i < 10; i++){
        if (x[i] < min)
            min = x[i];
    }
    for(int i = 0; i < 10; i++){
        if (x[i] > max)
            max = x[i];
    }
    printf("max = %d\t min = %d",max,min);
    return 0;
}