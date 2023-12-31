#include "include/api/api.h"
#include "include/LowCode-Cody_2/Sort.h"
#include "_sort.h"
// *********** From the preamble, verbatim:
#line 122 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    // GENERATED BY Cody:

    // Comparison function for qsort
int compareInts(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);
}

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _sortreaction_function_0(void* instance_args) {
    _sort_self_t* self = (_sort_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sort_in_t* in = self->_lf_in;
    if (in->is_present) {
        in->length = in->token->length;
        in->value = (int*)in->token->value;
    } else {
        in->length = 0;
    }
    int in_width = self->_lf_in_width; SUPPRESS_UNUSED_WARNING(in_width);
    _sort_out_t* out = &self->_lf_out;
    #line 131 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
        // GENERATED BY Cody
        reaction(in) -> out {
    
    if (in->is_present) {
    
      // Get length of input array
      int length = in->length;
    
      // Allocate memory for output array
      int* sorted = (int*) malloc(length * sizeof(int));
    
      // Copy input to output
      for (int i = 0; i < length; i++) {
        sorted[i] = in->value[i];
      }
    
      // Sort the output array
      qsort(sorted, length, sizeof(int), compareInts);
    
      // Set the output
      lf_set_array(out, sorted, length);
    
    }
}
#include "include/api/set_undef.h"
_sort_self_t* new__sort() {
    _sort_self_t* self = (_sort_self_t*)_lf_new_reactor(sizeof(_sort_self_t));
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    // Set input by default to an always absent default input.
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf_in = &self->_lf_default__in;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    // Set the default source reactor pointer
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf_default__in._base.source_reactor = (self_base_t*)self;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.number = 0;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.function = _sortreaction_function_0;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.self = self;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.name = "?";
    #line 130 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in.last = NULL;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in.number_of_reactions = 1;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    #ifdef FEDERATED
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    self->_lf__in.physical_time_of_arrival = NEVER;
    #line 105 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-Cody_2.lf"
    #endif // FEDERATED
    self->_lf__in.tmplt.type.element_size = sizeof(int);
    return self;
}
