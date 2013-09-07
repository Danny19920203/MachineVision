
// VisionDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "TaskName.h"




// CVisionDlg �Ի���
class CVisionDlg : public CDialog
{
// ����
public:
	CVisionDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_VISION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��



// ʵ��
protected:
	HICON m_hIcon;
	
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_ListBox_In;
	CListBox m_ListBox_Out;
	float f_Area;
	float TriangleArea(int bottom, int height);
	float RecArea(int length, int width);
	float CircularArea(int radius);
	CComboBox m_ComboBox;
	afx_msg void OnCbnSelchangeCombo();
	CString m_Edit_Num;
	afx_msg void OnBnClickedBtAdd();
};
