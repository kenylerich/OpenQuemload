#include "stdafx.h"

#include "PropertiesToolBar.h"
#include "Resource.h"

void CPropertiesToolBar::OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler)
{
	CMFCToolBar::OnUpdateCmdUI((CFrameWnd*) GetOwner(), bDisableIfNoHndler);
}

BOOL CPropertiesToolBar::AllowShowOnList() const 
{ 
	return FALSE; 
}