#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


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
