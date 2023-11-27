// Code generated by the Lingua Franca compiler from:
// file://home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT_1.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src-gen/low-code/LowCode-ChatGPT_1"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
void _lf_set_default_command_line_options() {}
#include "_randomarray.h"
#include "_sort.h"
#include "_print.h"
#include "_lowcode-chatgpt_1_main.h"
typedef enum {
    lowcode_chatgpt_1_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[lowcode_chatgpt_1_main],lowcode_chatgpt_1_main,_lf_number_of_workers,0,1,0,0,2,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _lowcode-chatgpt_1_main_main_self_t* lowcode_chatgpt_1_main_self[1];
    SUPPRESS_UNUSED_WARNING(lowcode_chatgpt_1_main_self);
    _randomarray_self_t* lowcode_chatgpt_1_r_self[1];
    SUPPRESS_UNUSED_WARNING(lowcode_chatgpt_1_r_self);
    _sort_self_t* lowcode_chatgpt_1_s_self[1];
    SUPPRESS_UNUSED_WARNING(lowcode_chatgpt_1_s_self);
    _print_self_t* lowcode_chatgpt_1_p_self[1];
    SUPPRESS_UNUSED_WARNING(lowcode_chatgpt_1_p_self);
    // ***** Start initializing LowCode-ChatGPT_1 of class LowCode-ChatGPT_1
    lowcode_chatgpt_1_main_self[0] = new__lowcode-chatgpt_1_main();
    lowcode_chatgpt_1_main_self[0]->base.environment = &envs[lowcode_chatgpt_1_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
    {
        // ***** Start initializing LowCode-ChatGPT_1.r of class RandomArray
        lowcode_chatgpt_1_r_self[0] = new__randomarray();
        lowcode_chatgpt_1_r_self[0]->base.environment = &envs[lowcode_chatgpt_1_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        lowcode_chatgpt_1_r_self[0]->_lf_out_width = -2;
        envs[lowcode_chatgpt_1_main].startup_reactions[startup_reaction_count[lowcode_chatgpt_1_main]++] = &lowcode_chatgpt_1_r_self[0]->_lf__reaction_0;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing LowCode-ChatGPT_1.r
    }
    {
        // ***** Start initializing LowCode-ChatGPT_1.s of class Sort
        lowcode_chatgpt_1_s_self[0] = new__sort();
        lowcode_chatgpt_1_s_self[0]->base.environment = &envs[lowcode_chatgpt_1_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        lowcode_chatgpt_1_s_self[0]->_lf_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        lowcode_chatgpt_1_s_self[0]->_lf_in_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing LowCode-ChatGPT_1.s
    }
    {
        // ***** Start initializing LowCode-ChatGPT_1.p of class Print
        lowcode_chatgpt_1_p_self[0] = new__print();
        lowcode_chatgpt_1_p_self[0]->base.environment = &envs[lowcode_chatgpt_1_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        lowcode_chatgpt_1_p_self[0]->_lf_in_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        lowcode_chatgpt_1_p_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing LowCode-ChatGPT_1.p
    }
    //***** End initializing LowCode-ChatGPT_1
    // **** Start deferred initialize for LowCode-ChatGPT_1
    {
    
    
    
        // **** Start deferred initialize for LowCode-ChatGPT_1.r
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of LowCode-ChatGPT_1.r.
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &lowcode_chatgpt_1_r_self[0]->base.allocations);
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &lowcode_chatgpt_1_r_self[0]->base.allocations);
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &lowcode_chatgpt_1_r_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.output_produced[count++] = &lowcode_chatgpt_1_r_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of LowCode-ChatGPT_1.r
            _lf_initialize_template((token_template_t*)
                    &(lowcode_chatgpt_1_r_self[0]->_lf_out),
            sizeof(int));
        }
        // **** End of deferred initialize for LowCode-ChatGPT_1.r
        // **** Start deferred initialize for LowCode-ChatGPT_1.s
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of LowCode-ChatGPT_1.s.
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &lowcode_chatgpt_1_s_self[0]->base.allocations);
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &lowcode_chatgpt_1_s_self[0]->base.allocations);
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &lowcode_chatgpt_1_s_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.output_produced[count++] = &lowcode_chatgpt_1_s_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of LowCode-ChatGPT_1.s
            _lf_initialize_template((token_template_t*)
                    &(lowcode_chatgpt_1_s_self[0]->_lf_out),
            sizeof(int));
        }
        // **** End of deferred initialize for LowCode-ChatGPT_1.s
        // **** Start deferred initialize for LowCode-ChatGPT_1.p
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of LowCode-ChatGPT_1.p.
            lowcode_chatgpt_1_p_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of LowCode-ChatGPT_1.p
        
        }
        // **** End of deferred initialize for LowCode-ChatGPT_1.p
    }
    // **** End of deferred initialize for LowCode-ChatGPT_1
    // **** Start non-nested deferred initialize for LowCode-ChatGPT_1
    {
    
    
    
        // **** Start non-nested deferred initialize for LowCode-ChatGPT_1.r
        {
        
            // For reference counting, set num_destinations for port LowCode-ChatGPT_1.r.out.
            // Iterate over range LowCode-ChatGPT_1.r.out(0,1)->[LowCode-ChatGPT_1.s.in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                lowcode_chatgpt_1_r_self[src_runtime]->_lf_out._base.num_destinations = 1;
                lowcode_chatgpt_1_r_self[src_runtime]->_lf_out._base.source_reactor = (self_base_t*)lowcode_chatgpt_1_r_self[src_runtime];
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range LowCode-ChatGPT_1.r.out(0,1)->[LowCode-ChatGPT_1.s.in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 0 of LowCode-ChatGPT_1.r triggers 1 downstream reactions
                    // through port LowCode-ChatGPT_1.r.out.
                    lowcode_chatgpt_1_r_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 0 of LowCode-ChatGPT_1.r, allocate an
                    // array of trigger pointers for downstream reactions through port LowCode-ChatGPT_1.r.out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &lowcode_chatgpt_1_r_self[src_runtime]->base.allocations); 
                    lowcode_chatgpt_1_r_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges LowCode-ChatGPT_1.r.out(0,1)->[LowCode-ChatGPT_1.s.in(0,1)] and LowCode-ChatGPT_1.s.in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range LowCode-ChatGPT_1.s.in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port LowCode-ChatGPT_1.s.in's trigger struct.
                        lowcode_chatgpt_1_r_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &lowcode_chatgpt_1_s_self[dst_runtime]->_lf__in;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for LowCode-ChatGPT_1.r
        // **** Start non-nested deferred initialize for LowCode-ChatGPT_1.s
        {
        
            // For reference counting, set num_destinations for port LowCode-ChatGPT_1.s.out.
            // Iterate over range LowCode-ChatGPT_1.s.out(0,1)->[LowCode-ChatGPT_1.p.in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                lowcode_chatgpt_1_s_self[src_runtime]->_lf_out._base.num_destinations = 1;
                lowcode_chatgpt_1_s_self[src_runtime]->_lf_out._base.source_reactor = (self_base_t*)lowcode_chatgpt_1_s_self[src_runtime];
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range LowCode-ChatGPT_1.s.out(0,1)->[LowCode-ChatGPT_1.p.in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 0 of LowCode-ChatGPT_1.s triggers 1 downstream reactions
                    // through port LowCode-ChatGPT_1.s.out.
                    lowcode_chatgpt_1_s_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 0 of LowCode-ChatGPT_1.s, allocate an
                    // array of trigger pointers for downstream reactions through port LowCode-ChatGPT_1.s.out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &lowcode_chatgpt_1_s_self[src_runtime]->base.allocations); 
                    lowcode_chatgpt_1_s_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges LowCode-ChatGPT_1.s.out(0,1)->[LowCode-ChatGPT_1.p.in(0,1)] and LowCode-ChatGPT_1.p.in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range LowCode-ChatGPT_1.p.in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port LowCode-ChatGPT_1.p.in's trigger struct.
                        lowcode_chatgpt_1_s_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &lowcode_chatgpt_1_p_self[dst_runtime]->_lf__in;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for LowCode-ChatGPT_1.s
        // **** Start non-nested deferred initialize for LowCode-ChatGPT_1.p
        {
        
        
        
        
        }
        // **** End of non-nested deferred initialize for LowCode-ChatGPT_1.p
    }
    // **** End of non-nested deferred initialize for LowCode-ChatGPT_1
    // Connect inputs and outputs for reactor LowCode-ChatGPT_1.
    // Connect inputs and outputs for reactor LowCode-ChatGPT_1.r.
    // Connect LowCode-ChatGPT_1.r.out(0,1)->[LowCode-ChatGPT_1.s.in(0,1)] to port LowCode-ChatGPT_1.s.in(0,1)
    // Iterate over ranges LowCode-ChatGPT_1.r.out(0,1)->[LowCode-ChatGPT_1.s.in(0,1)] and LowCode-ChatGPT_1.s.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range LowCode-ChatGPT_1.s.in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            lowcode_chatgpt_1_s_self[dst_runtime]->_lf_in = (_sort_in_t*)&lowcode_chatgpt_1_r_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor LowCode-ChatGPT_1.s.
    // Connect LowCode-ChatGPT_1.s.out(0,1)->[LowCode-ChatGPT_1.p.in(0,1)] to port LowCode-ChatGPT_1.p.in(0,1)
    // Iterate over ranges LowCode-ChatGPT_1.s.out(0,1)->[LowCode-ChatGPT_1.p.in(0,1)] and LowCode-ChatGPT_1.p.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range LowCode-ChatGPT_1.p.in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            lowcode_chatgpt_1_p_self[dst_runtime]->_lf_in = (_print_in_t*)&lowcode_chatgpt_1_s_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor LowCode-ChatGPT_1.p.
    {
    }
    {
    }
    {
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port LowCode-ChatGPT_1.r.out to array of is_present fields.
            envs[lowcode_chatgpt_1_main].is_present_fields[0 + count] = &lowcode_chatgpt_1_r_self[0]->_lf_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port LowCode-ChatGPT_1.r.out to array of intended_tag fields.
            envs[lowcode_chatgpt_1_main]._lf_intended_tag_fields[0 + count] = &lowcode_chatgpt_1_r_self[0]->_lf_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port LowCode-ChatGPT_1.s.out to array of is_present fields.
            envs[lowcode_chatgpt_1_main].is_present_fields[1 + count] = &lowcode_chatgpt_1_s_self[0]->_lf_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port LowCode-ChatGPT_1.s.out to array of intended_tag fields.
            envs[lowcode_chatgpt_1_main]._lf_intended_tag_fields[1 + count] = &lowcode_chatgpt_1_s_self[0]->_lf_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance LowCode-ChatGPT_1
    {
    
        // Set reaction priorities for ReactorInstance LowCode-ChatGPT_1.r
        {
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            lowcode_chatgpt_1_r_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        }
    
    
        // Set reaction priorities for ReactorInstance LowCode-ChatGPT_1.s
        {
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            lowcode_chatgpt_1_s_self[0]->_lf__reaction_0.index = 0xffffffffffff0001LL;
        }
    
    
        // Set reaction priorities for ReactorInstance LowCode-ChatGPT_1.p
        {
            lowcode_chatgpt_1_p_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            lowcode_chatgpt_1_p_self[0]->_lf__reaction_0.index = 0xffffffffffff0002LL;
        }
    
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[3] = 
        {1, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 3};
    lf_sched_init(
        &envs[lowcode_chatgpt_1_main],
        envs[lowcode_chatgpt_1_main].num_workers,
        &sched_params
    );
    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        _lf_logical_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void terminate_execution(environment_t* env) {}
#endif
