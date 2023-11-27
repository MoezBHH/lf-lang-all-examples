#ifndef _RANDOMARRAY_H
#define _RANDOMARRAY_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_967201072_H
#define TOP_LEVEL_PREAMBLE_967201072_H
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _randomarray_out_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 68 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    _randomarray_out_t _lf_out;
    #line 68 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    int _lf_out_width;
} _randomarray_self_t;
_randomarray_self_t* new__randomarray();
#endif // _RANDOMARRAY_H
