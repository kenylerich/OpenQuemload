#include "stdafx.h"
#include "Resource.h"
#include "OutlookBar.h"

BOOL COutlookBar::AllowShowOnPaneMenu() const 
{ 
	return TRUE; 
}

void COutlookBar::GetPaneName(CString& strName) const 
{ 
	BOOL bNameValid = strName.LoadString(IDS_OUTLOOKBAR); 
	ASSERT(bNameValid); 
	if (!bNameValid) strName.Empty(); 
}