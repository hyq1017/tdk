local base_scene = class("base_scene", cc.Scene)
local log = require("log.log")

--ctor
function base_scene:ctor()
    -- body
    self.m_name = " [base_scene] "
    log:i(log.T_DEFAULT, self.m_name..":ctor")
    --事件注册
    self.onNodeEvent("enter", self.on_enter)
    self.onNodeEvent("enter", self.on_exit)
end

--进入事件
function base_scene:on_enter()
    log:i(log.T_DEFAULT, self.m_name..":on_enter")
end

--退出事件
function base_scene:on_exit()
    log:i(log.T_DEFAULT, self.m_name..":on_exit")
end


return base_scene