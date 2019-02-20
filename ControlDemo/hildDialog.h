#pragma once


// ChildDialog dialog

class ChildDialog : public CDialog
{
	DECLARE_DYNAMIC(ChildDialog)

public:
	ChildDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~ChildDialog();

// Dialog Data
	enum { IDD = IDD_ChildDialog };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
