#ifndef CTIMER_HANDLE_H
#define CTIMER_HANDLE_H
#include <stdbool.h>
#include <stdint.h>

typedef struct ctimer_handler_t
{
    bool    can_dispatch;
    bool    can_repeat;
    float   first_delay;
    void*   param;
    void    (callback_pfn)(void *);
}ctimer_handler_t;

void ctimer_handler_dispatch(ctimer_handler_t *handler);
void ctimer_set_timer(ctimer_handler_t *handler);
void ctimer_remove_timer(ctimer_handler_t *handler);

#endif //CTIMER_HANDLE_H