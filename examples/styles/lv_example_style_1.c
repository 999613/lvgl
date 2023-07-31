#include "../lv_examples.h"
#if LV_BUILD_EXAMPLES && LV_USE_IMG

/**
 * Using the Size, Position and Padding style properties
 */
void lv_example_style_1(void)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, 5);        //设置圆角 半径为5

    /*Make a gradient*/
    lv_style_set_width(&style, 150);
    lv_style_set_height(&style, LV_SIZE_CONTENT);    //设置宽高

    lv_style_set_pad_ver(&style, 20);            //设置对象的垂直内边距属性
    lv_style_set_pad_left(&style, 5);            //设置对象的左内边距属性

    lv_style_set_x(&style, lv_pct(50));        //设置x坐标为屏幕的50%
    lv_style_set_y(&style, 80);

    /*Create an object with the new style*/
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    lv_obj_add_style(obj, &style, 0);

    lv_obj_t * label = lv_label_create(obj);
    lv_label_set_text(label, "Hello");
}

#endif
