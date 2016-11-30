#include <windows.h>

BOOL WINAPI Beep(
DWORD dwFreq,
DWORD dwDuration
);

LPSTR NazwaKlasy = "Klasa 123";

MSG Komunikat;

HWND hButton1;
HWND hButton2;
HWND hButton3;
HWND hButton4;
HWND hButton5;
HWND hButton6;
HWND hButton7;
HWND hButton8;
HWND hButton9;
HWND hButton10;
HWND hButton11;
HWND hButton12;
HWND hButton13;
HWND hButton14;
HWND hRadio;


#define ID_PRZYCISK1 501
#define ID_PRZYCISK2 502
#define ID_PRZYCISK3 503
#define ID_PRZYCISK4 504
#define ID_PRZYCISK5 505
#define ID_PRZYCISK6 506
#define ID_PRZYCISK7 507
#define ID_PRZYCISK8 508
#define ID_PRZYCISK9 509
#define ID_PRZYCISK10 510
#define ID_PRZYCISK11 511
#define ID_PRZYCISK12 512
#define ID_PRZYCISK13 513
#define ID_PRZYCISK14 514

LRESULT CALLBACK WndProc ( HWND hwnd, UINT msg
                          ,WPARAM wParam
                          ,LPARAM lParam );


int WINAPI WinMain( HINSTANCE hInstance
                   ,HINSTANCE hPrevInstance
                   ,LPSTR lpCmdLine
                   ,int nCmdShow)

{

    WNDCLASS wc;

    wc.style = 0;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor (NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) (COLOR_WINDOW +1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = NazwaKlasy;


    RegisterClass(&wc);


    HWND hWnd = CreateWindowEx (
        WS_EX_CLIENTEDGE,
        NazwaKlasy,
        "Proste Piano",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        850, 500,
        NULL, NULL,
        hInstance, NULL);

HWND hButton1 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "C", WS_CHILD | WS_VISIBLE |
WS_BORDER, 100, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK1, hInstance, NULL );


HWND hButton3 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "D", WS_CHILD | WS_VISIBLE |
WS_BORDER, 180, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK3, hInstance, NULL );


HWND hButton5 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "E", WS_CHILD | WS_VISIBLE |
WS_BORDER, 260, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK5, hInstance, NULL );

HWND hButton6 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "F", WS_CHILD | WS_VISIBLE |
WS_BORDER, 340, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK6, hInstance, NULL );

HWND hButton8 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "G", WS_CHILD | WS_VISIBLE |
WS_BORDER, 420, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK8, hInstance, NULL );


HWND hButton10 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "A", WS_CHILD | WS_VISIBLE |
WS_BORDER, 500, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK10, hInstance, NULL );


HWND hButton12 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "B", WS_CHILD | WS_VISIBLE |
WS_BORDER, 580, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK12, hInstance, NULL );

HWND hButton13 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "C", WS_CHILD | WS_VISIBLE |
WS_BORDER, 660, 150, 50, 150, hWnd,( HMENU ) ID_PRZYCISK13, hInstance, NULL );

HWND hButton14 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Wyjscie z Gry", WS_CHILD | WS_VISIBLE |
WS_BORDER, 375, 400, 100, 30, hWnd,( HMENU ) ID_PRZYCISK14, hInstance, NULL );

HWND hButton2 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Cis", WS_CHILD | WS_VISIBLE |
WS_BORDER, 147, 150, 35, 80, hWnd,( HMENU ) ID_PRZYCISK2, hInstance, NULL );


HWND hButton4 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Dis", WS_CHILD | WS_VISIBLE |
WS_BORDER, 228, 150, 35, 80, hWnd,( HMENU ) ID_PRZYCISK4, hInstance, NULL );


HWND hButton7 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Fis", WS_CHILD | WS_VISIBLE |
WS_BORDER, 388, 150, 35, 80, hWnd,( HMENU ) ID_PRZYCISK7, hInstance, NULL );


HWND hButton9 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Gis", WS_CHILD | WS_VISIBLE |
WS_BORDER, 468, 150, 35, 80, hWnd,( HMENU ) ID_PRZYCISK9, hInstance, NULL );

HWND hButton11 = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Ais", WS_CHILD | WS_VISIBLE |
WS_BORDER, 548, 150, 35, 80, hWnd,( HMENU ) ID_PRZYCISK11, hInstance, NULL );




    hRadio = CreateWindowEx
    (WS_EX_CLIENTEDGE, "BUTTON"
     , "Proste Piano", WS_CHILD | WS_VISIBLE | BS_GROUPBOX,
     375, 10, 100, 30, hWnd, NULL, hInstance, NULL);

    ShowWindow(hWnd, nCmdShow);



    while(GetMessage(&Komunikat, NULL, 0, 0))
    {
        TranslateMessage(&Komunikat);
        DispatchMessage(&Komunikat);
    }
    return Komunikat.wParam;
}

LRESULT CALLBACK WndProc ( HWND hwnd, UINT msg
                          ,WPARAM wParam
                          ,LPARAM lParam )

{

switch(msg)
{

case WM_COMMAND:
switch( wParam )
{
case ID_PRZYCISK1:
    Beep( 523, 300 );

    break;

case ID_PRZYCISK2:
    Beep( 554, 300 );

    break;
case ID_PRZYCISK3:
    Beep( 587, 300 );

    break;
case ID_PRZYCISK4:
    Beep( 622, 300 );

    break;
case ID_PRZYCISK5:
    Beep( 659, 300 );

    break;
case ID_PRZYCISK6:
    Beep( 698, 300 );

    break;
case ID_PRZYCISK7:
    Beep( 739, 300 );

break;
case ID_PRZYCISK8:
    Beep( 783, 300 );

    break;
case ID_PRZYCISK9:
    Beep( 830, 300 );

    break;
case ID_PRZYCISK10:
    Beep( 880, 300 );

    break;
    case ID_PRZYCISK11:
    Beep( 932, 300 );

    break;
    case ID_PRZYCISK12:
    Beep( 987, 300 );

    break;
    case ID_PRZYCISK13:
    Beep( 1046, 300 );

    break;
case ID_PRZYCISK14:
    DestroyWindow(hwnd);
    break;


}
break;
            case WM_CLOSE:
            DestroyWindow(hwnd);
            break;

            default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
        }
    return 0;
}
