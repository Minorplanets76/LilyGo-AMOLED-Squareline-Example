/**
 * Minimal Test case C.Chad 2024
 */

#include <LilyGo_AMOLED.h>
#include <LV_Helper.h>

#include <AceButton.h>
#include "eez-framework.h"
#include "ui/ui.h"

using namespace ace_button;

LilyGo_Class amoled;
lv_obj_t *label1;
lv_obj_t *label2;
uint8_t btnPin = 0;
AceButton button(btnPin);
uint8_t rotation = 1;


   


void setup()
{
    Serial.begin(115200);

    bool rslt = false;

    // Begin LilyGo  1.47 Inch AMOLED board class
    //rslt = amoled.beginAMOLED_147();


    // Begin LilyGo  1.91 Inch AMOLED board class
    //rslt =  amoled.beginAMOLED_191();

    // Begin LilyGo  2.41 Inch AMOLED board class
    //rslt =  amoled.beginAMOLED_241();

    // Automatically determine the access device
    rslt = amoled.begin();

    if (!rslt) {
        while (1) {
            Serial.println("The board model cannot be detected, please raise the Core Debug Level to an error");
            delay(1000);
        }
    }

    beginLvglHelper(amoled);
        amoled.setRotation(rotation);
        lv_disp_drv_t *drv = lv_disp_get_default()->driver;
        drv->hor_res = amoled.width();
        drv->ver_res = amoled.height();
        lv_disp_drv_update(lv_disp_get_default(), drv);
        ui_init();

}


void loop()
{
    lv_task_handler();
    delay(5);
}
