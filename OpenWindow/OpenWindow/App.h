#pragma once
#include <windows.h>

class App
{
#pragma region f/p
private:
	int nCmdShow = 10;
	PWSTR pCmdLine = { 0 };
	HINSTANCE hInstance = HINSTANCE();
	bool isOpen = true;
#pragma endregion f/p
#pragma region constructor
public:
	App();
#pragma endregion constructor
#pragma region methods
public:
	void WINAPI WinMain(HINSTANCE _hInstance, PWSTR _pCmdLine, int _nCmdShow);
	static LRESULT CALLBACK WindowProc(HWND _hwnd, UINT _uMsg, WPARAM _wParam, LPARAM _lParam);
#pragma endregion methods
};
