#include "StdAfx.h"
#include "VisionProject.h"

IMPLEMENT_SERIAL(CVisionProject, CObject, 1)	//�汾��
CVisionProject::CVisionProject(void)
{
}

CVisionProject::~CVisionProject(void)
{
}

void CVisionProject::RordSerialize(CArchive& ar)
{
	if (ar.IsStoring())				//�����к�(���湤����)
	{
		//ar << g_RordCamera.pbImgData;
	}
	else							//�����к�(��ȡ������)
	{
		//ar >> *g_RordCamera.pbImgData;
	}
}