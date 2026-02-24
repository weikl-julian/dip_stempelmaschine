/*
    Diplomarbeit Automatisierte Stempelmaschine
    Marlin Firmware - Custom Stamp UI - Screen Declaration
*/

#pragma once

#include "../../../inc/MarlinConfigPre.h"

#if HAS_MARLINUI_MENU


void menu_stamp_start();
void menu_stamp_overview();
void wait_stamp_homing();
void menu_stamp_info();
void menu_stamp_settings();
void wait_stamp_documents();
void menu_stamp_positioning();


#endif