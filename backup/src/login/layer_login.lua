--登录层
local layer_login = class("layer_login", cc.Layer)
local log = require("log.log")

function layer_login:ctor()
    -- body
    self.m_name = " [layer_login] "
    log:i(log.T_DEFAULT, self.m_name..":ctor")
    self:init_view()
end

--进入事件
function layer_login:on_enter()
    log:i(log.T_DEFAULT, self.m_name..":on_enter")
    self.super:on_enter();
end

--退出事件
function layer_login:on_exit()
    log:i(log.T_DEFAULT, self.m_name..":on_exit")

    self.super:on_exit()
end

function layer_login:init_view()
    log:i(log.T_DEFAULT, self.m_name..":init_view")
    
    

    self.m_ui_root = base_func.load_ui("csd.login.ui_login.lua", "csd.login.ui_login.csb")
    self:addChild(self.m_ui_root)

    --登录按钮
    local btn_login = self.m_ui_root:getChildByName("btn_login")
    btn_login:setPressedActionEnabled(true)
    btn_login:addTouchEventListener(handler(self,self.event_login))

    --注册按钮
    local btn_regist = self.m_ui_root:getChildByName("btn_regist")
    btn_regist:setPressedActionEnabled(true)
    btn_regist:addTouchEventListener(handler(self,self.event_regist))

    --帐号 textfield
    self.m_t_account = self.m_ui_root:getChildByName("t_account")
    --密码 textfield
    self.m_t_password = self.m_ui_root:getChildByName("t_password")
    
end

--按钮事件 登录
function layer_login:event_login(ref,eventType)
    
    if eventType == ccui.TouchEventType.ended then
        log:i(log.T_DEFAULT, self.m_name..":event_login")
        --test
        if true then
            scene_manager:switch_scene(scene_manager.T_HALL)
        end
    end
end

--按钮事件 注册
function layer_login:event_regist(ref,eventType)
    
    print("eventType:"..tostring(eventType).." :"..tostring(ref))
    if eventType == ccui.TouchEventType.ended then
        log:i(log.T_DEFAULT, self.m_name..":event_regist")
        if true then
            -- local mm = hh.LoginReq:new()
            -- mm:set_username("hyq")
            -- mm:set_password("123")

            -- hh.HNetworkManager:Instance():send_msg(mm, const.proto.MSG_TYPE_ACCESS, const.proto.MSG_ID_REGIST_REQ);
        end
    end

end


return layer_login