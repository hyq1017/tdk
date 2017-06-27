local app = class("app")
--场景管理器
--local scene_manager = require("manager.scene_manager"):create()

--程序开始
app.start = function(self)
    scene_manager:clear()
    --进入登录场景
    scene_manager:switch_scene(scene_manager.T_LOGIN)
end

return app