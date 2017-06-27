
cc.FileUtils:getInstance():setPopupNotify(false)
cc.FileUtils:getInstance():addSearchPath(cc.FileUtils:getInstance():getWritablePath().."Resources")
cc.FileUtils:getInstance():addSearchPath("src")
cc.FileUtils:getInstance():addSearchPath("res")

require "config"
require "cocos.init"
require "config.config_app"

local function main()
    local app = require("app.app"):create()
    app:start();
end

local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    print(msg)
end
