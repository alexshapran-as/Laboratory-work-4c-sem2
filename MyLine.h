#pragma once
#if !defined(AFX_MYLINE_H__65C81C1E_6FED_4C5E_8888_7132A02976AB__INCLUDED_)
#define AFX_MYLINE_H__65C81C1E_6FED_4C5E_8888_7132A02976AB__INCLUDED_
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class MyLine : public CObject
{
public:
	void add(MyLine *&pF); 
	MyLine();
	MyLine(CPoint p1, CPoint p2);
	virtual ~MyLine();
	CPoint p1, p2; 
	MyLine *pNext; 
	static int Num; 
	DECLARE_SERIAL(MyLine)
};
#endif // !defined(AFX_MYLINE_H__65C81C1E_6FED_4C5E_8888_7132A02976AB__INCLUDED_)