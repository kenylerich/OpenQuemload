
// OpenQemuLoadView.cpp : COpenQemuLoadView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OpenQemuLoad.h"
#endif

#include "OpenQemuLoadDoc.h"
#include "OpenQemuLoadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenQemuLoadView

IMPLEMENT_DYNCREATE(COpenQemuLoadView, CView)

BEGIN_MESSAGE_MAP(COpenQemuLoadView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// COpenQemuLoadView 构造/析构

COpenQemuLoadView::COpenQemuLoadView()
{
	// TODO: 在此处添加构造代码

}

COpenQemuLoadView::~COpenQemuLoadView()
{
}

BOOL COpenQemuLoadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// COpenQemuLoadView 绘制

void COpenQemuLoadView::OnDraw(CDC* /*pDC*/)
{
	COpenQemuLoadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}

void COpenQemuLoadView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COpenQemuLoadView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// COpenQemuLoadView 诊断

#ifdef _DEBUG
void COpenQemuLoadView::AssertValid() const
{
	CView::AssertValid();
}

void COpenQemuLoadView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COpenQemuLoadDoc* COpenQemuLoadView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenQemuLoadDoc)));
	return (COpenQemuLoadDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenQemuLoadView 消息处理程序
