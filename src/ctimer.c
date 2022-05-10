#include "ctimer.h"

double ctimer_get_current_time(ctimer_t t)
{
    clock_gettime(CLOCK_MONOTONIC, &t._time_holder);
    return (t._time_holder.tv_sec * 10e2) + (t._time_holder.tv_nsec * 10e-6);
}

double c_timer_add(ctimer_t t1, ctimer_t t2)
{

}