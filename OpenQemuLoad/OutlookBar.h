#pragma once

class COutlookBar : public CMFCOutlookBar
{
	virtual BOOL AllowShowOnPaneMenu() const;
	virtual void GetPaneName(CString& strName) const;
};