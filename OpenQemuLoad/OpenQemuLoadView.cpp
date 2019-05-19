#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "OpenQemuLoad.h"
#endif

#include "OpenQemuLoadDoc.h"
#include "OpenQemuLoadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(COpenQemuLoadView, CView)

BEGIN_MESSAGE_MAP(COpenQemuLoadView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()


COpenQemuLoadView::COpenQemuLoadView()
{
}

COpenQemuLoadView::~COpenQemuLoadView()
{
}

BOOL COpenQemuLoadView::PreCreateWindow(CREATESTRUCT& cs)
{
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	return CView::PreCreateWindow(cs);
}

#ifndef _DEBUG  // OpenQemuLoadView.cpp �еĵ��԰汾
inline COpenQemuLoadDoc* COpenQemuLoadView::GetDocument() const
   { return reinterpret_cast<COpenQemuLoadDoc*>(m_pDocument); }
#endif

// COpenQemuLoadView ����
void COpenQemuLoadView::OnDraw(CDC* /*pDC*/)
{
	COpenQemuLoadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc) return;
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


// COpenQemuLoadView ���

#ifdef _DEBUG
void COpenQemuLoadView::AssertValid() const
{
	CView::AssertValid();
}

void COpenQemuLoadView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COpenQemuLoadDoc* COpenQemuLoadView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenQemuLoadDoc)));
	return (COpenQemuLoadDoc*)m_pDocument;
}
#endif //_DEBUG
