
// VisionDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "TaskName.h"




// CVisionDlg 对话框
class CVisionDlg : public CDialog
{
// 构造
public:
	CVisionDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_VISION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持



// 实现
protected:
	HICON m_hIcon;
	
	// 生成的消息映射函数
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
