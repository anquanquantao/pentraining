#include <stdio.h>
#include <windows.h>
#include <string.h>
int fun(char *cpybuf)
{
	char Buf[8];
	strcpy(Buf,cpybuf);
	return 0;
}
int main()
{
	MessageBox(NULL,"BOF test","BOF",MB_OK);
	char buff[]="12345678AAAABBBB";
	fun(buff);
	return 0;
}
