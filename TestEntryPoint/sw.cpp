#include<stdio.h>
#include<windows.h>
int main()
{
	__asm
	{
		xor eax,eax
		xor ebx,ebx
		xor ecx,ecx
		xor edx,edx
		xor edi,edi
		xor esi,esi
	}
	MessageBoxEx(NULL, L"1234", 0, 0, 0);
	__asm
	{
		xor eax, eax
		xor ebx, ebx
		xor ecx, ecx
		xor edx, edx
		xor edi, edi
		xor esi, esi
	}

}