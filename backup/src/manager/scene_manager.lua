local scene_manager = {m_name = " [scene_manager] "}--class("scene_manager")
local log = require("log.log")
local scene_login = require("login.scene_login")
local scene_hall = require("hall.scene_hall")

scene_manager.T_LOGIN = 1
scene_manager.T_HALL = 2
scene_manager.T_GAME = 3

--clear 
function scene_manager:clear()
    log:i(log.T_DEFAULT, self.m_name..":clear")
end

--场景切换
function scene_manager:switch_scene(t)
    log:i(log.T_DEFAULT, self.m_name..":switch_scene :"..tostring(t)) 
    local scene = nil
    if t == scene_manager.T_LOGIN then
        scene = scene_login:create()
    elseif t == scene_manager.T_HALL then
        scene = scene_hall:create()
    elseif t == scene_manager.T_GAME then
    end
    if scene == nil then
        log:i(log.T_DEFAULT, self.m_name.." scene is nil")
        return
    end

    if DEBUG > 0 then
    --添加 重启脚本按钮
        local btn_reload = ccui.Button:create()
        local w,h = 72, 72
        btn_reload:setTouchEnabled(true)
        btn_reload:setPressedActionEnabled(true)
        btn_reload:loadTextures("common/shutdown.png", "common/shutdown.png", "")
        btn_reload:setTitleText("")
        btn_reload:setPosition(cc.p(display.width/2, display.height - h/2))
        btn_reload:addTouchEventListener(function(sender, eventType)
            if eventType == ccui.TouchEventType.ended then
                base_func.reload_script()
            end
        end)
        btn_reload:setLocalZOrder(zorder.scene.btn_reload)
        scene:addChild(btn_reload)
    end

    local director = cc.Director:getInstance()
    if director:getRunningScene() then
        director:replaceScene(scene)
    else
        director:runWithScene(scene)
    end
end

return scene_manager