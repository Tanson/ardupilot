#include <AP_HAL/AP_HAL.h>
#include "AP_RCMapper.h"

const AP_Param::GroupInfo RCMapper::var_info[] = {
    // @Param: ROLL
    // @DisplayName: Roll channel
    // @Description: Roll channel number. This is useful when you have a RC transmitter that can't change the channel order easily. Roll is normally on channel 1, but you can move it to any channel with this parameter.  Reboot is required for changes to take effect.
    // @Range: 1 8
    // @Increment: 1
    // @User: Advanced
    // @RebootRequired: True
    AP_GROUPINFO("ROLL",        0, RCMapper, _ch_roll, 1),

    // @Param: PITCH
    // @DisplayName: Pitch channel
    // @Description: Pitch channel number. This is useful when you have a RC transmitter that can't change the channel order easily. Pitch is normally on channel 2, but you can move it to any channel with this parameter.  Reboot is required for changes to take effect.
    // @Range: 1 8
    // @Increment: 1
    // @User: Advanced
    // @RebootRequired: True
    AP_GROUPINFO("PITCH",       1, RCMapper, _ch_pitch, 2),

    // @Param: THROTTLE
    // @DisplayName: Throttle channel
    // @Description: Throttle channel number. This is useful when you have a RC transmitter that can't change the channel order easily. Throttle is normally on channel 3, but you can move it to any channel with this parameter. Warning APM 2.X: Changing the throttle channel could produce unexpected fail-safe results if connection between receiver and on-board PPM Encoder is lost. Disabling on-board PPM Encoder is recommended.  Reboot is required for changes to take effect.
    // @Range: 1 8
    // @Increment: 1
    // @User: Advanced
    // @RebootRequired: True
    AP_GROUPINFO("THROTTLE",    2, RCMapper, _ch_throttle, 3),

    // @Param: YAW
    // @DisplayName: Yaw channel
    // @Description: Yaw channel number. This is useful when you have a RC transmitter that can't change the channel order easily. Yaw (also known as rudder) is normally on channel 4, but you can move it to any channel with this parameter.  Reboot is required for changes to take effect.
    // @Range: 1 8
    // @Increment: 1
    // @User: Advanced
    // @RebootRequired: True
    AP_GROUPINFO("YAW",         3, RCMapper, _ch_yaw, 4),
    AP_GROUPINFO("CH5",         4, RCMapper, _ch_5, 5),
	AP_GROUPINFO("CH6",         5, RCMapper, _ch_6, 6),
	AP_GROUPINFO("CH7",         6, RCMapper, _ch_7, 7),
	AP_GROUPINFO("CH8",         7, RCMapper, _ch_8, 8),
    AP_GROUPEND
};

// object constructor.
RCMapper::RCMapper(void)
{
    AP_Param::setup_object_defaults(this, var_info);
}
