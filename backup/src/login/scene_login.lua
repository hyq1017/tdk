--登录场景
--只处理场景事件
local base_scene = require("base.base_scene")
local scene_login = class("scene_login", base_scene)
local log = require("log.log")

function scene_login:ctor()
    -- body
    self.m_name = " [scene_login] "
    log:i(log.T_DEFAULT, self.m_name..":ctor")
    self:init_view()
end

--进入事件
function scene_login:on_enter()
    log:i(log.T_DEFAULT, self.m_name..":on_enter")
    self.super:on_enter();
end

--退出事件
function scene_login:on_exit()
    log:i(log.T_DEFAULT, self.m_name..":on_exit")
    self.super:on_exit()
end

function scene_login:init_view()
    log:i(log.T_DEFAULT, self.m_name..":init_view")
    --登录层创建
    self.m_layer_login = require("login/layer_login"):create()
    self:addChild(self.m_layer_login)
end

return scene_login