#include "../lv_examples.h"
#if LV_BUILD_EXAMPLES

/**
 * Using the background style properties
 */
void lv_example_style_2(void)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, 5);        设置圆角

    /*Make a gradient*/
    lv_style_set_bg_opa(&style, LV_OPA_COVER);    设置背景透明度，LV_OPA_COVER表示为完全不透明
    static lv_grad_dsc_t grad;        创建一个渐变对象 grad
    grad.dir = LV_GRAD_DIR_VER;        设置渐变的方向为垂直方向
    grad.stops_count = 2;        颜色停止点的数量
    grad.stops[0].color = lv_palette_lighten(LV_PALETTE_GREY, 1);    颜色值  lv_palette_lighten函数用于获取比基础颜色更浅的颜色 参数：基础颜色 亮度增加值
    grad.stops[1].color = lv_palette_main(LV_PALETTE_BLUE);    lv_palette_main用于获取基础颜色

    /*Shift the gradient to the bottom*/
    grad.stops[0].frac  = 128;        渐变停止点的位置数值介于0~255之间
    grad.stops[1].frac  = 192;

    lv_style_set_bg_grad(&style, &grad);

    /*Create an object with the new style*/
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    lv_obj_add_style(obj, &style, 0);
    lv_obj_center(obj);
}

#endif
