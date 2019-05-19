
// OpenQemuLoadView.h : COpenQemuLoadView ��Ľӿ�
//

#pragma once


class COpenQemuLoadView : public CView
{
protected: // �������л�����
	COpenQemuLoadView();
	DECLARE_DYNCREATE(COpenQemuLoadView)

// ����
public:
	COpenQemuLoadDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~COpenQemuLoadView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // OpenQemuLoadView.cpp �еĵ��԰汾
inline COpenQemuLoadDoc* COpenQemuLoadView::GetDocument() const
   { return reinterpret_cast<COpenQemuLoadDoc*>(m_pDocument); }
#endif

