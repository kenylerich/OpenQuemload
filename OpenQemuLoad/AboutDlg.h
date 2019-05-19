#pragma once

class CAboutDlg : public CDialogEx
{
public:
	enum { IDD = IDD_ABOUTBOX };

public:
	CAboutDlg();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV Ö§³Ö

protected:
	DECLARE_MESSAGE_MAP()
};