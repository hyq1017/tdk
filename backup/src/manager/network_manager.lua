local network_manager = {}
local log = require("log.log")


-- --ctor
-- function network_manager:ctor()
--     self.m_name = " [network_manager] "
--     log:i(log.T_DEFAULT, self.m_name..":ctor")
-- end

function network_manager.recv_msg( t, id, msg )
    -- body
    print("t:"..tostring(t))
    print("id:"..tostring(id))
    print("msg:"..tostring(msg))
    --分发消息
    if id == const.MSG_ID_REGIST_RESP then--注册响应
    	--local rsp = lua.cast(msg, )
    else
    end
end



return network_manager