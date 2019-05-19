#pragma once


class COpenQemuLoadView : public CView
{
protected: // 仅从序列化创建
	COpenQemuLoadView();
	DECLARE_DYNCREATE(COpenQemuLoadView)

// 特性
public:
	COpenQemuLoadDoc* GetDocument() const;
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual ~COpenQemuLoadView();

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};



