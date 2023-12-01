#include "include/api/api.h"
#include "include/api/set.h"
#include "include/TemperatureSensor_improved/Print.h"
#include "_print.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _printreaction_function_0(void* instance_args) {
    _print_self_t* self = (_print_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _print_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width; SUPPRESS_UNUSED_WARNING(in_width);
    #line 45 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    printf("%d\n", in->value);
}
#include "include/api/set_undef.h"
_print_self_t* new__print() {
    _print_self_t* self = (_print_self_t*)_lf_new_reactor(sizeof(_print_self_t));
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    // Set input by default to an always absent default input.
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf_in = &self->_lf_default__in;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    // Set the default source reactor pointer
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf_default__in._base.source_reactor = (self_base_t*)self;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.number = 0;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.function = _printreaction_function_0;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.self = self;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.name = "?";
    #line 44 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in.last = NULL;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in.number_of_reactions = 1;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #ifdef FEDERATED
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    self->_lf__in.physical_time_of_arrival = NEVER;
    #line 42 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/cody-code/TemperatureSensor_improved.lf"
    #endif // FEDERATED
    self->_lf__in.tmplt.type.element_size = sizeof(int);
    return self;
}
