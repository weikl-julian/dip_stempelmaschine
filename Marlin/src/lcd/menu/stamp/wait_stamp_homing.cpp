#include "../../../inc/MarlinConfigPre.h"

#if HAS_MARLINUI_MENU

#include "../../dogm/marlinui_DOGM.h"
#include "../../dogm/u8g_fontutf8.h"
#include "../../lcdprint.h"
#include "../../marlinui.h"
#include "../menu_item.h"
#include "../../utf8.h" 
#include "../../../libs/numtostr.h"
#include "../../dogm/fontdata/fontdata_ISO10646_1.h"
#include "menu_stamp.h"


static bool stamp_homing_started = false;


void wait_stamp_homing(){
    
    u8g.setFont(MENU_FONT_NAME);
    lcd_put_u8str(0, 32, F("Warte Auf Abschluss der Vorbereitungen ..."));


    if(!stamp_homing_started){
        queue.inject_P(PSTR("G28"));
        stamp_homing_started = true;
    }

    if(all_axes_homed()){
        ui.goto_screen(wait_stamp_documents);
        return;
    }

}


#endif // HAS_MARLINUI_MENU