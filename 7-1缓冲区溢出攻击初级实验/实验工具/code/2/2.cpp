#include <stdio.h>
#include <windows.h>
#include <string.h>
int fun2()
{
	char Buf[8];
	MessageBox(NULL,"You Win","PASS",MB_OK);
	return 0;
}
int fun(char *cpybuf)
{
	char Buf[8];
	strcpy(Buf,cpybuf);
	return 0;
}
int main()
{
	MessageBox(NULL,"BOF test","BOF",MB_OK);
	char buff[]="1234567";
	fun(buff);
	return 0;
}
