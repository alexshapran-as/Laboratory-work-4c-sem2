#include "stdafx.h"
#include "MFCApplication1.h"
#include "MyLine.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

IMPLEMENT_SERIAL(MyLine, CObject, 1)
int MyLine::Num = 0;
MyLine::MyLine()
{
	Num++;
}
MyLine::~MyLine()
{
	Num--;
}
MyLine::MyLine(CPoint p1, CPoint p2)
{
	this->p1 = p1;
	this->p2 = p2;
	Num++;
}
void MyLine::add(MyLine *& pF)
{
	pNext = pF;
	pF = this;
}