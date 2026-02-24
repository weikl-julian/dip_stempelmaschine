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



void wait_stamp_documents(){
    
    u8g.setFont(MENU_FONT_NAME);
    lcd_put_u8str(0, 32, F("Lege Dokumente in die Ablage."));

    safe_delay(5000); //Temporäre bis Sensor eingebaut ist, die erkennen können, ob Dokumente in der Ablage liegen oder nicht.
    

    ui.goto_screen(menu_stamp_positioning);


}




#endif // HAS_MARLINUI_MENU