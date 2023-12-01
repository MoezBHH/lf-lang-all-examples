#include "include/api/api.h"
#include "include/LowCode-ChatGPT3_5/Print.h"
#include "_print.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _printreaction_function_0(void* instance_args) {
    _print_self_t* self = (_print_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _print_in_t* in = self->_lf_in;
    if (in->is_present) {
        in->length = in->token->length;
        in->value = (int*)in->token->value;
    } else {
        in->length = 0;
    }
    int in_width = self->_lf_in_width; SUPPRESS_UNUSED_WARNING(in_width);
    #line 172 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    printf("Received: [");
    for (int i = 0; i < in->length; i++) {
      if (i > 0) printf(", ");
      printf("%d", in->value[i]);
    }
    printf("]\n");
}
#include "include/api/set_undef.h"
_print_self_t* new__print() {
    _print_self_t* self = (_print_self_t*)_lf_new_reactor(sizeof(_print_self_t));
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    // Set input by default to an always absent default input.
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf_in = &self->_lf_default__in;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    // Set the default source reactor pointer
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf_default__in._base.source_reactor = (self_base_t*)self;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.number = 0;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.function = _printreaction_function_0;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.self = self;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.name = "?";
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in.last = NULL;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in.number_of_reactions = 1;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    #ifdef FEDERATED
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    self->_lf__in.physical_time_of_arrival = NEVER;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    #endif // FEDERATED
    self->_lf__in.tmplt.type.element_size = sizeof(int);
    return self;
}
