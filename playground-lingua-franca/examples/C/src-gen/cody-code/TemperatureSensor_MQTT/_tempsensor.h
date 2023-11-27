#ifndef _TEMPSENSOR_H
#define _TEMPSENSOR_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1900715799_H
#define TOP_LEVEL_PREAMBLE_1900715799_H
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
    
    
    #line 34 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    _tempsensor_temp_t _lf_temp;
    #line 34 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    int _lf_temp_width;
    #line 36 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    reaction_t _lf__reaction_0;
    #line 41 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    reaction_t _lf__reaction_1;
    #line 40 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    trigger_t _lf__myTimer;
    #line 40 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_MQTT.lf"
    reaction_t* _lf__myTimer_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _tempsensor_self_t;
_tempsensor_self_t* new__tempsensor();
#endif // _TEMPSENSOR_H
