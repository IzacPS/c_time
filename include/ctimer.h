#ifndef CTIMER_H
#define CTIMER_H
#include <time.h>

typedef struct
{
    struct timespec _time_holder;
    
}ctimer_t;

double ctimer_get_current_time(ctimer_t t);
double c_timer_add(ctimer_t t1, ctimer_t t2);


#endif //CTIMER_H