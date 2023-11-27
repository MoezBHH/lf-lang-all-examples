#include "include/api/api.h"
#include "include/TemperatureSensor_MQTT/TemperatureSensor_MQTT.h"
#include "_temperaturesensor_mqtt_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_temperaturesensor_mqtt_main_main_self_t* new__temperaturesensor_mqtt_main() {
    _temperaturesensor_mqtt_main_main_self_t* self = (_temperaturesensor_mqtt_main_main_self_t*)_lf_new_reactor(sizeof(_temperaturesensor_mqtt_main_main_self_t));

    return self;
}
