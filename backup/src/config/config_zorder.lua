local zorder = {}

--对象的zorder严格按照这个配置来写
--所有加在scene下的对象的zorder
zorder.scene = {
    btn_reload = 1001,--重启脚本按钮
    toast = 1000,--toast提示
    pop_wnd = 999,--弹窗
}

return zorder