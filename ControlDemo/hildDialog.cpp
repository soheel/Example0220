// hildDialog.cpp : implementation file
//

#include "stdafx.h"
#include "ControlDemo.h"
#include "hildDialog.h"


// ChildDialog dialog

IMPLEMENT_DYNAMIC(ChildDialog, CDialog)

ChildDialog::ChildDialog(CWnd* pParent /*=NULL*/)
	: CDialog(ChildDialog::IDD, pParent)
{

}

ChildDialog::~ChildDialog()
{
}

void ChildDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChildDialog, CDialog)
END_MESSAGE_MAP()


// ChildDialog message handlers
