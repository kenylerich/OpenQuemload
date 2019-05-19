#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


class COpenQemuLoadApp : public CWinAppEx
{
public:
	BOOL  m_bHiColorIcons;

public:
	COpenQemuLoadApp();
	virtual BOOL InitInstance();
	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern COpenQemuLoadApp theApp;
