
// OpenQemuLoadView.h : COpenQemuLoadView 类的接口
//

#pragma once


class COpenQemuLoadView : public CView
{
protected: // 仅从序列化创建
	COpenQemuLoadView();
	DECLARE_DYNCREATE(COpenQemuLoadView)

// 特性
public:
	COpenQemuLoadDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~COpenQemuLoadView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // OpenQemuLoadView.cpp 中的调试版本
inline COpenQemuLoadDoc* COpenQemuLoadView::GetDocument() const
   { return reinterpret_cast<COpenQemuLoadDoc*>(m_pDocument); }
#endif

