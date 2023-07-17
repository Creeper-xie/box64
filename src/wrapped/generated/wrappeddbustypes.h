/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappeddbusTYPES_H_
#define __wrappeddbusTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFpiV_t)(void*, int32_t, ...);
typedef int32_t (*iFpiA_t)(void*, int32_t, va_list);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iFppip_t)(void*, void*, int32_t, void*);
typedef int32_t (*iFppiA_t)(void*, void*, int32_t, va_list);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFppppp_t)(void*, void*, void*, void*, void*);
typedef int32_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(dbus_connection_remove_filter, vFppp_t) \
	GO(dbus_timeout_set_data, vFppp_t) \
	GO(dbus_watch_set_data, vFppp_t) \
	GO(dbus_message_append_args, iFpiV_t) \
	GO(dbus_message_append_args_valist, iFpiA_t) \
	GO(dbus_connection_set_dispatch_status_function, vFpppp_t) \
	GO(dbus_connection_set_wakeup_main_function, vFpppp_t) \
	GO(dbus_server_set_new_connection_function, vFpppp_t) \
	GO(dbus_connection_set_data, iFpipp_t) \
	GO(dbus_message_set_data, iFpipp_t) \
	GO(dbus_pending_call_set_data, iFpipp_t) \
	GO(dbus_server_set_data, iFpipp_t) \
	GO(dbus_message_get_args, iFppip_t) \
	GO(dbus_message_get_args_valist, iFppiA_t) \
	GO(dbus_connection_add_filter, iFpppp_t) \
	GO(dbus_connection_register_fallback, iFpppp_t) \
	GO(dbus_pending_call_set_notify, iFpppp_t) \
	GO(dbus_connection_try_register_fallback, iFppppp_t) \
	GO(dbus_connection_try_register_object_path, iFppppp_t) \
	GO(dbus_connection_set_timeout_functions, iFpppppp_t) \
	GO(dbus_connection_set_watch_functions, iFpppppp_t) \
	GO(dbus_server_set_timeout_functions, iFpppppp_t) \
	GO(dbus_server_set_watch_functions, iFpppppp_t)

#endif // __wrappeddbusTYPES_H_
