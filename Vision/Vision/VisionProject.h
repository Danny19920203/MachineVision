/************************************************************************/
/* 用于打开，保存视觉工作流程文件									*/
/* 后缀名为：.RordVision
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
	virtual void RordSerialize(CArchive& ar);			//序列化：打开，保存
};
