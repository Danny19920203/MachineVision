#pragma once
#include "afxwin.h"


// CTaskName dialog

class CTaskName : public CDialog
{
	DECLARE_DYNAMIC(CTaskName)

public:
	CTaskName(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTaskName();

// Dialog Data
	enum { IDD = IDD_TASKNAME };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtDone();
	CString m_Edit_TaskName;
	CString m_Edit_ID;
	afx_msg void OnEnChangeEditId();
	CComboBox m_ComboBox_TaskName;
	afx_msg void OnCbnSelchangeComboTaskName();
};
