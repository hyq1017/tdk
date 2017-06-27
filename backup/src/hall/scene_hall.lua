--登录场景
--只处理场景事件
local base_scene = require("base.base_scene")
local scene_hall = class("scene_hall", base_scene)
local log = require("log.log")

function scene_hall:ctor()
    -- body
    self.m_name = " [scene_hall] "
    log:i(log.T_DEFAULT, self.m_name..":ctor")
    self:init_view()
end

--进入事件
function scene_hall:on_enter()
    log:i(log.T_DEFAULT, self.m_name..":on_enter")
    self.super:on_enter()
end

--退出事件
function scene_hall:on_exit()
    log:i(log.T_DEFAULT, self.m_name..":on_exit")
    self.super:on_exit()
end

function scene_hall:init_view()
    log:i(log.T_DEFAULT, self.m_name..":init_view")
    --登录层创建
    self.m_layer = require("hall.layer_hall"):create()
    self:addChild(self.m_layer)
end

return scene_hall