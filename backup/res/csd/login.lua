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

--Create root
local root=cc.Node:create()
root:setName("root")

--Create bg
local bg = cc.Sprite:create("bg.png")
bg:setName("bg")
bg:setTag(5)
bg:setCascadeColorEnabled(true)
bg:setCascadeOpacityEnabled(true)
bg:setPosition(720.0000, 360.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(bg)
layout:setPositionPercentX(0.5625)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.7500)
layout:setPercentHeight(0.8889)
layout:setSize({width = 960.0000, height = 640.0000})
layout:setLeftMargin(240.0000)
layout:setRightMargin(80.0000)
layout:setTopMargin(40.0000)
layout:setBottomMargin(40.0000)
bg:setBlendFunc({src = 770, dst = 771})
root:addChild(bg)

--Create layer_login
local layer_login = ccui.Layout:create()
layer_login:ignoreContentAdaptWithSize(false)
layer_login:setClippingEnabled(false)
layer_login:setBackGroundColorType(1)
layer_login:setBackGroundColor({r = 255, g = 255, b = 0})
layer_login:setTouchEnabled(true);
layer_login:setLayoutComponentEnabled(true)
layer_login:setName("layer_login")
layer_login:setTag(3)
layer_login:setCascadeColorEnabled(true)
layer_login:setCascadeOpacityEnabled(true)
layer_login:setPosition(287.0032, 130.3323)
layout = ccui.LayoutComponent:bindLayoutComponent(layer_login)
layout:setPositionPercentX(0.2990)
layout:setPositionPercentY(0.2036)
layout:setPercentWidth(0.4167)
layout:setPercentHeight(0.6250)
layout:setSize({width = 400.0000, height = 400.0000})
layout:setLeftMargin(287.0032)
layout:setRightMargin(272.9968)
layout:setTopMargin(109.6677)
layout:setBottomMargin(130.3323)
bg:addChild(layer_login)

--Create btn_login
local btn_login = ccui.Button:create()
btn_login:ignoreContentAdaptWithSize(false)
btn_login:loadTextureNormal("common/btn_bg.png",0)
btn_login:loadTexturePressed("common/btn_bg.png",0)
btn_login:loadTextureDisabled("common/btn_bg.png",0)
btn_login:setTitleFontSize(14)
btn_login:setTitleText("login")
btn_login:setTitleColor({r = 65, g = 65, b = 70})
btn_login:setScale9Enabled(true)
btn_login:setCapInsets({x = 15, y = 11, width = 16, height = 14})
btn_login:setLayoutComponentEnabled(true)
btn_login:setName("btn_login")
btn_login:setTag(4)
btn_login:setCascadeColorEnabled(true)
btn_login:setCascadeOpacityEnabled(true)
btn_login:setPosition(182.9000, 66.4000)
layout = ccui.LayoutComponent:bindLayoutComponent(btn_login)
layout:setPositionPercentX(0.4573)
layout:setPositionPercentY(0.1660)
layout:setPercentWidth(0.1150)
layout:setPercentHeight(0.0900)
layout:setSize({width = 46.0000, height = 36.0000})
layout:setLeftMargin(159.9000)
layout:setRightMargin(194.1000)
layout:setTopMargin(315.6000)
layout:setBottomMargin(48.4000)
layer_login:addChild(btn_login)

--Create t_account
local t_account = ccui.TextField:create()
t_account:ignoreContentAdaptWithSize(false)
tolua.cast(t_account:getVirtualRenderer(), "cc.Label"):setLineBreakWithoutSpace(true)
t_account:setFontSize(20)
t_account:setPlaceHolder("account")
t_account:setString([[]])
t_account:setMaxLength(10)
t_account:setLayoutComponentEnabled(true)
t_account:setName("t_account")
t_account:setTag(5)
t_account:setCascadeColorEnabled(true)
t_account:setCascadeOpacityEnabled(true)
t_account:setPosition(200.0000, 250.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(t_account)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.6250)
layout:setPercentWidth(0.2500)
layout:setPercentHeight(0.0500)
layout:setSize({width = 100.0000, height = 20.0000})
layout:setLeftMargin(150.0000)
layout:setRightMargin(150.0000)
layout:setTopMargin(140.0000)
layout:setBottomMargin(240.0000)
layer_login:addChild(t_account)

--Create t_password
local t_password = ccui.TextField:create()
t_password:ignoreContentAdaptWithSize(false)
tolua.cast(t_password:getVirtualRenderer(), "cc.Label"):setLineBreakWithoutSpace(true)
t_password:setFontSize(20)
t_password:setPlaceHolder("passworld")
t_password:setString([[]])
t_password:setMaxLength(10)
t_password:setLayoutComponentEnabled(true)
t_password:setName("t_password")
t_password:setTag(6)
t_password:setCascadeColorEnabled(true)
t_password:setCascadeOpacityEnabled(true)
t_password:setPosition(200.0000, 200.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(t_password)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.2500)
layout:setPercentHeight(0.0500)
layout:setSize({width = 100.0000, height = 20.0000})
layout:setLeftMargin(150.0000)
layout:setRightMargin(150.0000)
layout:setTopMargin(190.0000)
layout:setBottomMargin(190.0000)
layer_login:addChild(t_password)

--Create Animation
result['animation'] = ccs.ActionTimeline:create()
  
result['animation']:setDuration(0)
result['animation']:setTimeSpeed(1.0000)
--Create Animation List

result['root'] = root
return result;
end

return Result
