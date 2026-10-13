/*
 Copyright (C) 2024  Greg Smith

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 
*/

#ifndef _DISPLAY_TONEX_H
#define _DISPLAY_TONEX_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

// Boards built with ui_generated_800x480land (see main/CMakeLists.txt)
#define TONEX_UI_800X480    (CONFIG_TONEX_CONTROLLER_HARDWARE_PLATFORM_WAVESHARE_43B || CONFIG_TONEX_CONTROLLER_HARDWARE_PLATFORM_WAVESHARE_43DEVONLY || \
                             CONFIG_TONEX_CONTROLLER_HARDWARE_PLATFORM_JC4880P4 || CONFIG_TONEX_CONTROLLER_HARDWARE_PLATFORM_WAVESHARE_7B)

void tonex_show_settings_tab(lv_event_t* e);
void tonex_action_effect_icon_clicked(lv_event_t* e);
void tonex_action_parameter_changed(lv_event_t* e);
void tonex_update_icon_order(void);
uint8_t tonex_update_ui_parameters(void);
void tonex_value_clicked(lv_event_t *e);
void tonex_value_changed(lv_event_t * e);

#if TONEX_UI_800X480
void tonex_add_preset_slot_setting(void);
#endif

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif