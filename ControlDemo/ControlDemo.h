
// ControlDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CControlDemoApp:
// �� Ŭ������ ������ ���ؼ��� ControlDemo.cpp�� �����Ͻʽÿ�.
//

class CControlDemoApp : public CWinAppEx
{
public:
	CControlDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CControlDemoApp theApp;