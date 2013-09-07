#pragma once

class CTask
{
public:
	CTask(void);
	~CTask(void);

	struct TEST
	{
		int n_Num;
		CString s_Name;
	};
	TEST _Test[50];

	int n_TempNum;
};
