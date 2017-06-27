--常量

local c = {}

c.proto = {
	--/** 消息类型定义  **/
MSG_TYPE_ACCESS = 0x01,
MSG_TYPE_HALL = 0x02,
MSG_TYPE_ROOM = 0x03,
MSG_TYPE_GAME = 0x04,
MSG_TYPE_CHAT = 0x05,
MSG_TYPE_HEART = 0x06,


--/*登录相关定义*/
MSG_ID_REGIST_REQ = 10,--//注册请求
MSG_ID_REGIST_RESP = 11,--//注册响应
MSG_ID_LOGIN_REQ = 20,--//登录请求
MSG_ID_LOGIN_RESP = 21,--//登录响应
}




return c