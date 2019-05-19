#pragma once

class CPropertiesToolBar : public CMFCToolBar
{
public:
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);
	virtual BOOL AllowShowOnList() const;
};