local base_func = {m_name = "[base_func]"}

--检测lua中引用的对象是否已经被释放
function base_func.isnull( node )
	return not node or tolua.isnull(node)
end

--加载cocostudio ui
function base_func.load_ui( lua_path, binary_path)
	if lua_path and binary_path then
		return CC_USE_Binary and cc.CSLoader:createNode(binary_path) or require(lua_path):create().root
	end
	if lua_path then
		return require(lua_path):create().root
	end
	if binary_path then
		return cc.CSLoader:createNode(binary_path)
	end
end

--重启脚本
function base_func.reload_script()
    log:i(log.T_DEFAULT, base_func.m_name..":reload_script ")  
    hh.HCommon:reload_script()  
end

return base_func