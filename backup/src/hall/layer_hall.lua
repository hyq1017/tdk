--登录层
local layer_hall = class("layer_hall", cc.Layer)
local log = require("log.log")

function layer_hall:ctor()
    -- body
    self.m_name = " [layer_hall] "
    log:i(log.T_DEFAULT, self.m_name..":ctor")
    self:init_view()
end

--进入事件
function layer_hall:on_enter()
    log:i(log.T_DEFAULT, self.m_name..":on_enter")
    self.super:on_enter();
end

--退出事件
function layer_hall:on_exit()
    log:i(log.T_DEFAULT, self.m_name..":on_exit")

    self.super:on_exit()
end

function layer_hall:init_view()
    log:i(log.T_DEFAULT, self.m_name..":init_view")

    self.m_ui_root = base_func.load_ui("csd.hall.ui_hall.lua", "csd.hall.ui_hall.csb")
    self:addChild(self.m_ui_root)

--     --登录按钮
--     local btn_create = self.m_ui_root:getChildByName("btn_create_room")
--     btn_create:setPressedActionEnabled(true)
--     btn_create:addTouchEventListener(handler(self,self.event_create_room))
end

--按钮事件 登录
function layer_hall:event_create_room(ref,eventType)
    if eventType == ccui.TouchEventType.ended then
        log:i(log.T_DEFAULT, self.m_name..":event_create_r+oom")
        --test
        if true then
            scene_manager:switch_scene(scene_manager.T_LOGIN)
        end
    end

end

return layer_hall