// TaskName.cpp : implementation file
//

#include "stdafx.h"
#include "Vision.h"
#include "TaskName.h"
#include "Task.h"


extern CTask g_Task;
extern int n_TempNum;
// CTaskName dialog

IMPLEMENT_DYNAMIC(CTaskName, CDialog)

CTaskName::CTaskName(CWnd* pParent /*=NULL*/)
	: CDialog(CTaskName::IDD, pParent)
	, m_Edit_TaskName(_T(""))
	, m_Edit_ID(_T(""))
{

}

CTaskName::~CTaskName()
{
}

void CTaskName::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TASK_NAME, m_Edit_TaskName);
	DDX_Text(pDX, IDC_EDIT_ID, m_Edit_ID);
	DDX_Control(pDX, IDC_COMBO_TASK_NAME, m_ComboBox_TaskName);
}


BEGIN_MESSAGE_MAP(CTaskName, CDialog)
	ON_BN_CLICKED(IDC_BT_DONE, &CTaskName::OnBnClickedBtDone)
	ON_EN_CHANGE(IDC_EDIT_ID, &CTaskName::OnEnChangeEditId)
	ON_CBN_SELCHANGE(IDC_COMBO_TASK_NAME, &CTaskName::OnCbnSelchangeComboTaskName)
END_MESSAGE_MAP()


// CTaskName message handlers

void CTaskName::OnBnClickedBtDone()
{
	GetDlgItem(IDC_EDIT_TASK_NAME)->GetWindowText(m_Edit_TaskName);

	g_Task._Test[n_TempNum].s_Name = m_Edit_TaskName;

	OnOK();
}

void CTaskName::OnEnChangeEditId()
{
	GetDlgItem(IDC_EDIT_ID)->GetWindowText(m_Edit_ID);

	n_TempNum = _wtoi(m_Edit_ID);
}

void CTaskName::OnCbnSelchangeComboTaskName()
{
	CString s_TempName;
	int nCurSel = m_ComboBox_TaskName.GetCurSel();
	m_ComboBox_TaskName.SetCurSel(nCurSel);
	m_ComboBox_TaskName.GetWindowText(s_TempName);

	if (s_TempName == TRIANGLE)
	{
		g_Task._Test[n_TempNum].n_Num = TRIANGLE_FLAG;
	}

	if (s_TempName == REC)
	{
		g_Task._Test[n_TempNum].n_Num = REC_FLAG;
	}

	if (s_TempName == CIRCULAR)
	{
		g_Task._Test[n_TempNum].n_Num = CIRCULAR_FLAG;
	}
}
