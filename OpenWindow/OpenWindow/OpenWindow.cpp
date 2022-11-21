#include <iostream>
#include <windows.h>
#include "App.h"

LPCWSTR test = LPCWSTR("EDIT");
LPCWSTR test2 = LPCWSTR("Hello");
HWND textBox;
HWND hwnd = HWND();


#ifndef UNICODE
#define UNICODE
#endif 

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    // Register the window class.
    const wchar_t CLASS_NAME[] = L"Sample Window Class";

    WNDCLASS wc = {};

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // Create the window.

    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        CLASS_NAME,                     // Window class
        L"Learn to Program Windows",    // Window text
        WS_OVERLAPPEDWINDOW,            // Window style

        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
    );

    if (hwnd == NULL)
    {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop.

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_CREATE:
        textBox = CreateWindow(test,
            test2,
            WS_BORDER | WS_CHILD | WS_VISIBLE,
            10, 10, CW_USEDEFAULT, 20,
            hwnd, NULL, NULL, NULL);
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}



int nCmdShow = 10;
PWSTR pCmdLine = { 0 };
HINSTANCE hInstance = HINSTANCE();
HINSTANCE hPrevInstance = HINSTANCE();



int main()
{
    wWinMain(hInstance, hPrevInstance, pCmdLine, nCmdShow);
}
