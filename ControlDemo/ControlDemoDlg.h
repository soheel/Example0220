
// ControlDemoDlg.h : ��� ����
//

#pragma once


// CControlDemoDlg ��ȭ ����
class CControlDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CControlDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.
	ChildDialog childDlg;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONTROLDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
