
--------------------------------
-- @module LoginRsp
-- @extend Message
-- @parent_module custom

--------------------------------
-- 
-- @function [parent=#LoginRsp] operator= 
-- @param self
-- @param #LoginRsp from
-- @return LoginRsp#LoginRsp ret (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] ByteSize 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] set_allocated_opt2 
-- @param self
-- @param #string opt2
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] SerializeWithCachedSizes 
-- @param self
-- @param #custom.io::CodedOutputStream output
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] result 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- @overload self, LoginRsp         
-- @overload self, custom.Message         
-- @function [parent=#LoginRsp] CopyFrom
-- @param self
-- @param #custom.Message from
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)

--------------------------------
-- 
-- @function [parent=#LoginRsp] New 
-- @param self
-- @return LoginRsp#LoginRsp ret (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] release_opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] MergePartialFromCodedStream 
-- @param self
-- @param #custom.io::CodedInputStream input
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] has_result 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] GetMetadata 
-- @param self
-- @return Metadata#Metadata ret (return value: custom.Metadata)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] GetCachedSize 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- @overload self, LoginRsp         
-- @overload self, custom.Message         
-- @function [parent=#LoginRsp] MergeFrom
-- @param self
-- @param #custom.Message from
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)

--------------------------------
-- 
-- @function [parent=#LoginRsp] clear_opt1 
-- @param self
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] clear_opt2 
-- @param self
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] opt1 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] has_opt2 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] has_opt1 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] Clear 
-- @param self
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] mutable_opt2 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] set_result 
-- @param self
-- @param #int value
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] unknown_fields 
-- @param self
-- @return UnknownFieldSet#UnknownFieldSet ret (return value: custom.UnknownFieldSet)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] mutable_unknown_fields 
-- @param self
-- @return UnknownFieldSet#UnknownFieldSet ret (return value: custom.UnknownFieldSet)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] SerializeWithCachedSizesToArray 
-- @param self
-- @param #unsigned char output
-- @return unsigned char#unsigned char ret (return value: unsigned char)
        
--------------------------------
-- @overload self, char         
-- @overload self, string         
-- @overload self, char, unsigned int         
-- @function [parent=#LoginRsp] set_opt2
-- @param self
-- @param #char value
-- @param #unsigned int size
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)

--------------------------------
-- 
-- @function [parent=#LoginRsp] set_opt1 
-- @param self
-- @param #int value
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] IsInitialized 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] clear_result 
-- @param self
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] Swap 
-- @param self
-- @param #LoginRsp other
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] descriptor 
-- @param self
-- @return Descriptor#Descriptor ret (return value: custom.Descriptor)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] default_instance 
-- @param self
-- @return LoginRsp#LoginRsp ret (return value: LoginRsp)
        
--------------------------------
-- 
-- @function [parent=#LoginRsp] LoginRsp 
-- @param self
-- @return LoginRsp#LoginRsp self (return value: LoginRsp)
        
return nil
