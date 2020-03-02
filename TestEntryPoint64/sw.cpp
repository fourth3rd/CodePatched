#include<stdio.h>
#include<Windows.h>

extern "C" int __stdcall GetAddress();

int main()
{
	GetAddress();
	MessageBoxEx(NULL, L"1234", 0, 0, 0);
	GetAddress();
}