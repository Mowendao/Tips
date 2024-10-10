BOOL WINAPI SetConsoleCursorPosition
(
	HANDLE hConsoleOutput, //标准输出句柄
	COORD  dwCursorPosition //要设置的位置信息
);

void SetCursor(int x, int y) //控制黑窗口光标 
{
	HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coo;
	coo.X = x;
	coo.Y = y;
	SetConsoleCursorPosition(hOutput, coo);
}
