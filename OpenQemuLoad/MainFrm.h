#pragma once
#include "PropertiesWnd.h"
#include "CalendarBar.h"
#include "Resource.h"
#include "OutlookBar.h"


class CMainFrame : public CFrameWndEx
{
// 特性
protected:
	CSplitterWnd m_wndSplitter;
	CMFCMenuBar       m_wndMenuBar;
	CMFCToolBar       m_wndToolBar;
	CMFCStatusBar     m_wndStatusBar;
	CMFCToolBarImages m_UserImages;
	CPropertiesWnd    m_wndProperties;
	COutlookBar       m_wndNavigationBar;
	CMFCShellTreeCtrl m_wndTree;
	CCalendarBar      m_wndCalendar;
	CMFCOutlookBarTabCtrl* m_pCurrOutlookWnd;
	CMFCOutlookBarPane*    m_pCurrOutlookPage;

protected: // 仅从序列化创建
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

public:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL LoadFrame(UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	BOOL CreateDockingWindows();
	void SetDockingWindowIcons(BOOL bHiColorIcons);
	BOOL CreateOutlookBar(CMFCOutlookBar& bar, UINT uiID, CMFCShellTreeCtrl& tree, CCalendarBar& calendar, int nInitialWidth);
	int FindFocusedOutlookWnd(CMFCOutlookBarTabCtrl** ppOutlookWnd);
	CMFCOutlookBarTabCtrl* FindOutlookParent(CWnd* pWnd);

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnViewCustomize();
	afx_msg LRESULT OnToolbarCreateNew(WPARAM wp, LPARAM lp);
	DECLARE_MESSAGE_MAP()
};


