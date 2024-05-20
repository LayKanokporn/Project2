SET(SOURCES screens/ui_Index.c
    screens/ui_loading_page.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_685164422.c
    images/ui_img_alarm_png.c
    images/ui_img_pill_png.c
    images/ui_img_setting_png.c
    images/ui_img_312035399.c
    images/ui_img_pickup_icon1_png.c
    images/ui_img_smartpill_png.c
    images/ui_img_1345796492.c
    images/ui_img_1272477160.c
    images/ui_img_1024313544.c
    fonts/ui_font_kanit18.c
    fonts/ui_font_kanit20.c
    fonts/ui_font_kanit24.c)

add_library(ui ${SOURCES})
