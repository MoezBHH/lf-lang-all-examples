#ifndef _TEMPSENSOR_H
#define _TEMPSENSOR_H
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
} _tempsensor_temp_t;
typedef struct {
    struct self_base_t base;
    #line 21 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    _tempsensor_temp_t _lf_temp;
    #line 21 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    int _lf_temp_width;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    reaction_t _lf__reaction_0;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    reaction_t _lf__reaction_1;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    trigger_t _lf__myTimer;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    reaction_t* _lf__myTimer_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _tempsensor_self_t;
_tempsensor_self_t* new__tempsensor();
#endif // _TEMPSENSOR_H
