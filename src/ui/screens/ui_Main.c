// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Main_screen_init(void)
{
    ui_Main = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Main, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button1 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Button1, lv_pct(40));
    lv_obj_set_height(ui_Button1, lv_pct(30));
    lv_obj_set_x(ui_Button1, lv_pct(25));
    lv_obj_set_y(ui_Button1, lv_pct(-33));
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_Button1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_Grey);
    ui_object_set_themeable_style_property(ui_Button1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_Grey);
    lv_obj_set_style_bg_grad_color(ui_Button1, lv_color_hex(0x6F6D6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Button1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Button1, 5, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Label1 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_Label1, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_Label1, "SCAN");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Button5, lv_pct(90));
    lv_obj_set_height(ui_Button5, lv_pct(30));
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Button5, 5, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Label8 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_Label8, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_Label8, "RECORDS");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button6 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Button6, lv_pct(90));
    lv_obj_set_height(ui_Button6, lv_pct(30));
    lv_obj_set_x(ui_Button6, lv_pct(0));
    lv_obj_set_y(ui_Button6, lv_pct(33));
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Button6, 5, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Label9 = lv_label_create(ui_Button6);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_Label9, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_Label9, "SETUP");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Main, ui_event_Main, LV_EVENT_ALL, NULL);

}