/************************************************************************/
/* ���ڴ򿪣������Ӿ����������ļ�									*/
/* ��׺��Ϊ��.RordVision
/************************************************************************/
#pragma once
#include "afx.h"
#include "stdafx.h"
class CVisionProject : public CObject
{
	DECLARE_SERIAL(CVisionProject);
public:
	CVisionProject(void);
	~CVisionProject(void);
	virtual void RordSerialize(CArchive& ar);			//���л����򿪣�����
};
