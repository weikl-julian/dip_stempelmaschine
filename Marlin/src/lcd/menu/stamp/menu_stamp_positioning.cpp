#include "../../../inc/MarlinConfigPre.h"

#if HAS_MARLINUI_MENU

#include "../../dogm/marlinui_DOGM.h"
#include "../../dogm/u8g_fontutf8.h"
#include "../../lcdprint.h"
#include "../../marlinui.h"
#include "../menu_item.h"
#include "../../utf8.h" 
#include "../../../libs/numtostr.h"
#include "../menu.h"
#include "../../dogm/fontdata/fontdata_ISO10646_1.h"
#include "menu_stamp.h"
#include "../menu_addon.h"


#include "../../../module/motion.h"
#include "../../../gcode/parser.h" // for inch support



void menu_stamp_positioning() {
  START_MENU();

  STATIC_ITEM_F(F("Waehle Stempelposition"), SS_CENTER);

    
  

  END_MENU();
}






#endif // HAS_MARLINUI_MENU

//Code aus menu_motion.cpp - noch nicht geschafft dass es in meinem code funktioniert
/*
if (TERN1(DELTA, current_position.z <= delta_clip_start_height)) {
      SUBMENU_N(X_AXIS, MSG_MOVE_N, []{ _menu_move_distance(X_AXIS, []{ lcd_move_axis(X_AXIS); }); });
      #if HAS_Y_AXIS
        SUBMENU_N(Y_AXIS, MSG_MOVE_N, []{ _menu_move_distance(Y_AXIS, []{ lcd_move_axis(Y_AXIS); }); });
      #endif
    }

*/