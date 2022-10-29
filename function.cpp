#include "function.h"

TestCls::TestCls()
{
	g = new int[12];
}

TestCls::~TestCls()
{
	delete[] g;
};