#ifndef _PRINT_H
#define _PRINT_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_769507769_H
#define TOP_LEVEL_PREAMBLE_769507769_H
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _print_in_t;
typedef struct {
    struct self_base_t base;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    _print_in_t* _lf_in;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    // width of -2 indicates that it is not a multiport.
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    int _lf_in_width;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    // Default input (in case it does not get connected)
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    _print_in_t _lf_default__in;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    reaction_t _lf__reaction_0;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    trigger_t _lf__in;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _print_self_t;
_print_self_t* new__print();
#endif // _PRINT_H
