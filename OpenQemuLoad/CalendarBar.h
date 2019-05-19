#pragma once

/////////////////////////////////////////////////////////////////////////////
// CCalendarBar ´°¿Ú

class CCalendarBar : public CWnd
{
protected:
	CMonthCalCtrl m_wndCalendar;
	int m_nMyCalendarsY;
	CImageList m_Images;

// ¹¹Ôì
public:
	CCalendarBar();
	virtual ~CCalendarBar();
	virtual BOOL Create(const RECT& rect, CWnd* pParentWnd, UINT nID = (UINT)-1);
	

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();

	DECLARE_MESSAGE_MAP()
};
