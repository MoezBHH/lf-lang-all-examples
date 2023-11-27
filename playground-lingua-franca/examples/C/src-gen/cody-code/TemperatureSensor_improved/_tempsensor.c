#include "include/api/api.h"
#include "include/api/set.h"
#include "include/TemperatureSensor_improved/TempSensor.h"
#include "_tempsensor.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _tempsensorreaction_function_0(void* instance_args) {
    _tempsensor_self_t* self = (_tempsensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _tempsensor_temp_t* temp = &self->_lf_temp;
    #line 24 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    srand(time(NULL));
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _tempsensorreaction_function_1(void* instance_args) {
    _tempsensor_self_t* self = (_tempsensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _tempsensor_temp_t* temp = &self->_lf_temp;
    #line 29 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    int randomValue = rand() % 31 + 5;
    lf_set(temp, randomValue);
}
#include "include/api/set_undef.h"
_tempsensor_self_t* new__tempsensor() {
    _tempsensor_self_t* self = (_tempsensor_self_t*)_lf_new_reactor(sizeof(_tempsensor_self_t));
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.number = 0;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.function = _tempsensorreaction_function_0;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.self = self;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.name = "?";
    #line 23 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.number = 1;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.function = _tempsensorreaction_function_1;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.self = self;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.name = "?";
    #line 28 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer.last = NULL;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer_reactions[0] = &self->_lf__reaction_1;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer.reactions = &self->_lf__myTimer_reactions[0];
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer.number_of_reactions = 1;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #ifdef FEDERATED
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__myTimer.physical_time_of_arrival = NEVER;
    #line 27 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #endif // FEDERATED
    self->_lf__myTimer.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__myTimer.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
