#include <stdio.h>
#include "ctimer.h"
#include "unistd.h"

int main()
{
    ctimer_t timer;
    double start_time = ctimer_get_current_time(timer);
    do{
        sleep(3);
        double final_time = ctimer_get_current_time(timer);
        double current_time =  final_time - start_time;
        printf("%f\n", current_time);
        start_time = final_time;
    }while(1);
}