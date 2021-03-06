/*
	Project			 : Wolf Engine. Copyright(c) Pooya Eimandar (http://PooyaEimandar.com) . All rights reserved.
	Source			 : Please direct any bug to https://github.com/PooyaEimandar/Wolf.Engine/issues
	Website			 : http://WolfSource.io
	Name			 : w_target_ver.h
	Description		 : Pre-Compiled header
	Comment          : Including SDKDDKVer.h defines the highest available Windows platform.
					   If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
					   set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.
*/

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __W_TARGET_VER_H__
#define __W_TARGET_VER_H__

#if defined(__WIN32) || defined(__UWP)
#include <SDKDDKVer.h>
#endif

#endif //__W_TARGET_VER_H__
