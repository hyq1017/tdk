--------------------------------------------------------------
-- This file was automatically generated by Cocos Studio.
-- Do not make changes to this file.
-- All changes will be lost.
--------------------------------------------------------------

local luaExtend = require "LuaExtend"

-- using for layout to decrease count of local variables
local layout = nil
local localLuaFile = nil
local innerCSD = nil
local innerProject = nil
local localFrame = nil

local Result = {}
------------------------------------------------------------
-- function call description
-- create function caller should provide a function to 
-- get a callback function in creating scene process.
-- the returned callback function will be registered to 
-- the callback event of the control.
-- the function provider is as below :
-- Callback callBackProvider(luaFileName, node, callbackName)
-- parameter description:
-- luaFileName  : a string, lua file name
-- node         : a Node, event source
-- callbackName : a string, callback function name
-- the return value is a callback function
------------------------------------------------------------
function Result.create(callBackProvider)

local result={}
setmetatable(result, luaExtend)

--Create ui_login
local ui_login=cc.Node:create()
ui_login:setName("ui_login")
layout = ccui.LayoutComponent:bindLayoutComponent(ui_login)
layout:setSize({width = 1280.0000, height = 720.0000})

--Create bg
local bg = ccui.ImageView:create()
bg:ignoreContentAdaptWithSize(false)
bg:loadTexture("common/chat_text_bg.png",0)
bg:setScale9Enabled(true)
bg:setCapInsets({x = 20, y = 11, width = 10, height = 28})
bg:setLayoutComponentEnabled(true)
bg:setName("bg")
bg:setTag(44)
bg:setCascadeColorEnabled(true)
bg:setCascadeOpacityEnabled(true)
bg:setAnchorPoint(0.0000, 0.0000)
bg:setPosition(10.0000, 10.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(bg)
layout:setPositionPercentX(0.0078)
layout:setPositionPercentY(0.0139)
layout:setPercentWidth(0.9844)
layout:setPercentHeight(0.9722)
layout:setSize({width = 1260.0000, height = 700.0000})
layout:setLeftMargin(10.0000)
layout:setRightMargin(10.0000)
layout:setTopMargin(10.0000)
layout:setBottomMargin(10.0000)
ui_login:addChild(bg)

--Create btn_login
local btn_login = ccui.Button:create()
btn_login:ignoreContentAdaptWithSize(false)
btn_login:loadTextureNormal("common/btn_bg.png",0)
btn_login:loadTexturePressed("common/btn_bg.png",0)
btn_login:setTitleFontSize(20)
btn_login:setTitleText("登录")
btn_login:setTitleColor({r = 65, g = 65, b = 70})
btn_login:setScale9Enabled(true)
btn_login:setCapInsets({x = 15, y = 11, width = 16, height = 14})
btn_login:setLayoutComponentEnabled(true)
btn_login:setName("btn_login")
btn_login:setTag(68)
btn_login:setCascadeColorEnabled(true)
btn_login:setCascadeOpacityEnabled(true)
btn_login:setPosition(417.0000, 150.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(btn_login)
layout:setPositionPercentX(0.3258)
layout:setPositionPercentY(0.2083)
layout:setPercentWidth(0.1172)
layout:setPercentHeight(0.0694)
layout:setSize({width = 150.0000, height = 50.0000})
layout:setLeftMargin(342.0000)
layout:setRightMargin(788.0000)
layout:setTopMargin(545.0000)
layout:setBottomMargin(125.0000)
ui_login:addChild(btn_login)

--Create btn_regist
local btn_regist = ccui.Button:create()
btn_regist:ignoreContentAdaptWithSize(false)
btn_regist:loadTextureNormal("common/btn_bg.png",0)
btn_regist:loadTexturePressed("common/btn_bg.png",0)
btn_regist:setTitleFontSize(20)
btn_regist:setTitleText("注册")
btn_regist:setTitleColor({r = 65, g = 65, b = 70})
btn_regist:setScale9Enabled(true)
btn_regist:setCapInsets({x = 15, y = 11, width = 16, height = 14})
btn_regist:setLayoutComponentEnabled(true)
btn_regist:setName("btn_regist")
btn_regist:setTag(69)
btn_regist:setCascadeColorEnabled(true)
btn_regist:setCascadeOpacityEnabled(true)
btn_regist:setPosition(724.0000, 150.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(btn_regist)
layout:setPositionPercentX(0.5656)
layout:setPositionPercentY(0.2083)
layout:setPercentWidth(0.1172)
layout:setPercentHeight(0.0694)
layout:setSize({width = 150.0000, height = 50.0000})
layout:setLeftMargin(649.0000)
layout:setRightMargin(481.0000)
layout:setTopMargin(545.0000)
layout:setBottomMargin(125.0000)
ui_login:addChild(btn_regist)

--Create t_account
local t_account = ccui.TextField:create()
t_account:ignoreContentAdaptWithSize(false)
tolua.cast(t_account:getVirtualRenderer(), "cc.Label"):setLineBreakWithoutSpace(true)
t_account:setFontSize(20)
t_account:setPlaceHolder("请输入帐号")
t_account:setString([[]])
t_account:setMaxLength(10)
t_account:setLayoutComponentEnabled(true)
t_account:setName("t_account")
t_account:setTag(70)
t_account:setCascadeColorEnabled(true)
t_account:setCascadeOpacityEnabled(true)
t_account:setPosition(620.0000, 421.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(t_account)
layout:setPositionPercentX(0.4844)
layout:setPositionPercentY(0.5847)
layout:setPercentWidth(0.1563)
layout:setPercentHeight(0.0694)
layout:setSize({width = 200.0000, height = 50.0000})
layout:setLeftMargin(520.0000)
layout:setRightMargin(560.0000)
layout:setTopMargin(274.0000)
layout:setBottomMargin(396.0000)
ui_login:addChild(t_account)

--Create t_password
local t_password = ccui.TextField:create()
t_password:ignoreContentAdaptWithSize(false)
tolua.cast(t_password:getVirtualRenderer(), "cc.Label"):setLineBreakWithoutSpace(true)
t_password:setFontSize(20)
t_password:setPlaceHolder("请输入密码")
t_password:setString([[]])
t_password:setMaxLength(10)
t_password:setLayoutComponentEnabled(true)
t_password:setName("t_password")
t_password:setTag(71)
t_password:setCascadeColorEnabled(true)
t_password:setCascadeOpacityEnabled(true)
t_password:setPosition(620.0000, 339.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(t_password)
layout:setPositionPercentX(0.4844)
layout:setPositionPercentY(0.4708)
layout:setPercentWidth(0.1563)
layout:setPercentHeight(0.0694)
layout:setSize({width = 200.0000, height = 50.0000})
layout:setLeftMargin(520.0000)
layout:setRightMargin(560.0000)
layout:setTopMargin(356.0000)
layout:setBottomMargin(314.0000)
ui_login:addChild(t_password)

--Create Animation
result['animation'] = ccs.ActionTimeline:create()
  
result['animation']:setDuration(0)
result['animation']:setTimeSpeed(1.0000)
--Create Animation List

result['root'] = ui_login
return result;
end

return Result
