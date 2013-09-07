#include "StdAfx.h"
#include "VisionProject.h"

IMPLEMENT_SERIAL(CVisionProject, CObject, 1)	//版本号
CVisionProject::CVisionProject(void)
{
}

CVisionProject::~CVisionProject(void)
{
}

void CVisionProject::RordSerialize(CArchive& ar)
{
	if (ar.IsStoring())				//正序列号(保存工程流)
	{
		//ar << g_RordCamera.pbImgData;
	}
	else							//反序列号(读取工程流)
	{
		//ar >> *g_RordCamera.pbImgData;
	}
}