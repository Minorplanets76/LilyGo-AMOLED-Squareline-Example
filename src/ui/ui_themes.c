// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"


const ui_theme_variable_t _ui_theme_color_Grey[1] = {0x676767};
const ui_theme_variable_t _ui_theme_alpha_Grey[1] = {255};

const ui_theme_variable_t _ui_theme_color_Blue[1] = {0x4190FD};
const ui_theme_variable_t _ui_theme_alpha_Blue[1] = {255};
uint8_t ui_theme_idx = UI_THEME_DEFAULT;


void ui_theme_set(uint8_t theme_idx)
{
    ui_theme_idx = theme_idx;
    _ui_theme_set_variable_styles(UI_VARIABLE_STYLES_MODE_FOLLOW);
}

