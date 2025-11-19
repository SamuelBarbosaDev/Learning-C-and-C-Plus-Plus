#include <stdio.h>

struct fighter{
    int power;
    double speed;
};

int main(void){
    struct fighter hua;
    hua.power = 7;
    hua.speed = 1.7;

    printf("Power: %d\nSpeed: %lf\n",hua.power,hua.speed);
    return 0;
}