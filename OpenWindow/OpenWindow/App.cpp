#include "App.h"
#include <iostream>

App::App()
{
    hInstance = HINSTANCE();
    pCmdLine = { 0 };
    nCmdShow = 10;
}

void __stdcall App::WinMain(HINSTANCE _hInstance, PWSTR _pCmdLine, int _nCmdShow)
{
    const wchar_t CLASS_NAME[] = L"Sample Window Class";

    WNDCLASS wc = {};

    wc.lpfnWndProc = App::WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);
    

    HWND hwnd = CreateWindowEx(
        0,                             
        CLASS_NAME,                    
        L"J'ai peut être compris des truc !",   
        WS_OVERLAPPEDWINDOW,          

        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,          
        NULL,       
        hInstance,  
        NULL        
    );


    if (hwnd == NULL)
    {
        return;
    }

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop.

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
        SendMessageW;
    }

    return;
}



LRESULT App::WindowProc(HWND _hwnd, UINT _uMsg, WPARAM _wParam, LPARAM _lParam)
{
    switch (_uMsg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(_hwnd, _uMsg, _wParam, _lParam);
}


