#pragma once


class COpenQemuLoadView : public CView
{
protected: // �������л�����
	COpenQemuLoadView();
	DECLARE_DYNCREATE(COpenQemuLoadView)

// ����
public:
	COpenQemuLoadDoc* GetDocument() const;
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual ~COpenQemuLoadView();

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};



