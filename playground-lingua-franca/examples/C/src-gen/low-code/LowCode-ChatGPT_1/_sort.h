#ifndef _SORT_H
#define _SORT_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1203940378_H
#define TOP_LEVEL_PREAMBLE_1203940378_H
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
} _sort_in_t;
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
} _sort_out_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    _sort_in_t* _lf_in;
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    // width of -2 indicates that it is not a multiport.
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    int _lf_in_width;
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    // Default input (in case it does not get connected)
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    _sort_in_t _lf_default__in;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    _sort_out_t _lf_out;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    int _lf_out_width;
    #line 155 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    reaction_t _lf__reaction_0;
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    trigger_t _lf__in;
    #line 129 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf"
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _sort_self_t;
_sort_self_t* new__sort();
#endif // _SORT_H
