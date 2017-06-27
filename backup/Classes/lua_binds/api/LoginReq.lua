
--------------------------------
-- @module LoginReq
-- @extend Message
-- @parent_module custom

--------------------------------
-- 
-- @function [parent=#LoginReq] has_opt2 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] operator= 
-- @param self
-- @param #LoginReq from
-- @return LoginReq#LoginReq ret (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] release_username 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] ByteSize 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] set_allocated_opt2 
-- @param self
-- @param #string opt2
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] SerializeWithCachedSizes 
-- @param self
-- @param #custom.io::CodedOutputStream output
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] has_password 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] Swap 
-- @param self
-- @param #LoginReq other
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] set_allocated_password 
-- @param self
-- @param #string password
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- @overload self, LoginReq         
-- @overload self, custom.Message         
-- @function [parent=#LoginReq] CopyFrom
-- @param self
-- @param #custom.Message from
-- @return LoginReq#LoginReq self (return value: LoginReq)

--------------------------------
-- 
-- @function [parent=#LoginReq] New 
-- @param self
-- @return LoginReq#LoginReq ret (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] set_allocated_username 
-- @param self
-- @param #string username
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] release_opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] MergePartialFromCodedStream 
-- @param self
-- @param #custom.io::CodedInputStream input
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] GetMetadata 
-- @param self
-- @return Metadata#Metadata ret (return value: custom.Metadata)
        
--------------------------------
-- @overload self, char         
-- @overload self, string         
-- @overload self, char, unsigned int         
-- @function [parent=#LoginReq] set_password
-- @param self
-- @param #char value
-- @param #unsigned int size
-- @return LoginReq#LoginReq self (return value: LoginReq)

--------------------------------
-- 
-- @function [parent=#LoginReq] GetCachedSize 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] clear_opt1 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] clear_opt2 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] opt1 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] username 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] mutable_password 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] has_opt1 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @overload self, char         
-- @overload self, string         
-- @overload self, char, unsigned int         
-- @function [parent=#LoginReq] set_username
-- @param self
-- @param #char value
-- @param #unsigned int size
-- @return LoginReq#LoginReq self (return value: LoginReq)

--------------------------------
-- 
-- @function [parent=#LoginReq] release_password 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] Clear 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] has_username 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] mutable_opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- @overload self, LoginReq         
-- @overload self, custom.Message         
-- @function [parent=#LoginReq] MergeFrom
-- @param self
-- @param #custom.Message from
-- @return LoginReq#LoginReq self (return value: LoginReq)

--------------------------------
-- 
-- @function [parent=#LoginReq] password 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] unknown_fields 
-- @param self
-- @return UnknownFieldSet#UnknownFieldSet ret (return value: custom.UnknownFieldSet)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] mutable_username 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] mutable_unknown_fields 
-- @param self
-- @return UnknownFieldSet#UnknownFieldSet ret (return value: custom.UnknownFieldSet)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] SerializeWithCachedSizesToArray 
-- @param self
-- @param #unsigned char output
-- @return unsigned char#unsigned char ret (return value: unsigned char)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] clear_password 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- @overload self, char         
-- @overload self, string         
-- @overload self, char, unsigned int         
-- @function [parent=#LoginReq] set_opt2
-- @param self
-- @param #char value
-- @param #unsigned int size
-- @return LoginReq#LoginReq self (return value: LoginReq)

--------------------------------
-- 
-- @function [parent=#LoginReq] set_opt1 
-- @param self
-- @param #int value
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] clear_username 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] IsInitialized 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] descriptor 
-- @param self
-- @return Descriptor#Descriptor ret (return value: custom.Descriptor)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] default_instance 
-- @param self
-- @return LoginReq#LoginReq ret (return value: LoginReq)
        
--------------------------------
-- 
-- @function [parent=#LoginReq] LoginReq 
-- @param self
-- @return LoginReq#LoginReq self (return value: LoginReq)
        
return nil
