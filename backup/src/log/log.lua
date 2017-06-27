--日志打印
local log = {}

--打印日志类型--该类型和c++中的log type为同一个值
log.T_DEFAULT = 0
log.T_LOGIN = 1
log.T_HALL = 2
log.T_GAME = 3
log.T_NET = 4

function log:i(para_t, content)
    if type(para_t) ~= "number" or type(content) ~= "string" then
        return
    end
    hh.HLog:log(para_t, content)   
end

function log:e(para_t, content)
    if type(para_t) ~= "number" or type(content) ~= "string" then
        return
    end
    hh.HLog:log(para_t, content)
end


return log