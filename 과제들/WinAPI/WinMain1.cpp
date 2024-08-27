// WindowsProject1.cpp : ���ø����̼ǿ� ���� �������� �����մϴ�.
//
//
//#include "pch.h"
//#include "framework.h"
//#include "WindowsProject1.h"
// ������ �ƴ� �����쿡�� �����ϴ� ���� �����ϴ� ����

#pragma region WinAPI
/*
* 
* LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; // ��Ƽ ����Ʈ, L�� �����ڵ带 ���� W�� ��Ƽ 
TCHAR * script3 = _T("ABC"); // ��ǻ�Ͱ� �˾Ƽ� ��Ƽ�� ��Ƽ�� ���ϴ� ���Ϸ� (�ٲٴ� ������ �ʿ��ϹǷ� �����ս��� ������)
*/
#pragma endregion

#include <Windows.h> // ������ ģ���� �ƴ�, 
#include <tchar.h> // text Character

// ���� ����:
HINSTANCE _hInstance; // ���� �ν��Ͻ��Դϴ�.
HWND _hWnd; // �ڵ� : ������ â, �ֻ��� ��ü = ������ Ÿ��Ʋ 
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//������������world wide����
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)

{
    _hInstance = hInstance;

    // 1 - 1 ������ â ����ü ���� �� �ʱ�ȭ
    //WNDCLASSEXW wndclass;  ex�� extend��� ���� ��Ÿ�� 
    WNDCLASS wndclass;

    // ������ �ٲ� ������ ���µ� �̰��� ����
    wndclass.cbClsExtra = 0; // CLS = Ŭ����, 0�� ��� ����, Extra = ���� �޸� �Ҵ� 
    wndclass.cbWndExtra = 0; // Wnd = ������
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); // hbr �ڵ� �귯�� ~, background = â�� ��� ��
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW); // IDC_ARROW = Ŀ���� ��� 
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION); // MAKEINTRESOURCE = �ܺο��� �������ڴ�, ���� ����� ��ũ 
    wndclass.hInstance = hInstance;
    wndclass.lpfnWndProc = (WNDPROC)WndProc; // �߷��������� �׳� �ϱ����� = long pointer functional numbering, ���Ǹ� ���� ������ 0���� ����
    wndclass.lpszClassName = _lpszClass; // ������ â Ÿ��Ʋ �̸�, ����� LPTSTR _lpszClass = TEXT("Windows API") �̰�
    wndclass.lpszMenuName = NULL;
    wndclass.style = CS_HREDRAW | CS_VREDRAW; // ������ ����� ���� ���� 

    // 1-2 ������ Ŭ���� ���
    RegisterClass(&wndclass);

    // 1- 3 ȭ�鿡 ������ ������ â ���� 
    _hWnd = CreateWindowW
    (
        _lpszClass, // ������ Ŭ���� �ĺ���
        _lpszClass, // ������ Ÿ�̺� �� �̸�
        WS_OVERLAPPEDWINDOW, // ������ ��Ÿ�� 
        400, // ������ ȭ�� X ��ǥ
        100, // ������ ȭ�� Y ��ǥ
        800, // ������ ȭ�� ���� ũ��
        800, // ������ ȭ�� ���� ũ��
        NULL, // �θ� ������, NULL ���� GetDesktopWindow() �����쿡���� ���� â�� ��� �� ���� �׷��� �Ϸ��� ���� â�� ������� �� �̰��� ������ �Ű������� �̾��� �� ���� 
        (HMENU)NULL, // �޴� �ڵ�
        hInstance, // �ν��Ͻ� ����
        NULL // �������� �ڽ� �����츦 �����ϸ� ����, �ƴϸ� NULL
    );

    // 1 - 4 ȭ�鿡 ������ â �����ֱ�
    ShowWindow(_hWnd, nCmdShow);

    // UpdateWindow(hWnd); // ����, ������Ʈ (ĳ���� ��ġ ����) , ������ ������ ����


    // MSG : �ü������ �߻��ϴ� �޼��� ������ �����ϱ� ���� ����ü 
    MSG message;
    // ZeroMemory(&message, sizeof(message)); , �޸𸮸� 0�� ���� 

    // �ڡڡڡڡ� , ���������� ���� ��
    // 2. �⺻ �޽��� �����Դϴ�: 
    // GetMessage : �޼����� ������ �� ���� ������ ���
    // �� �޼��� ť�κ��� �ϳ��� �޼����� �������� ������ ����
    // �� �ٸ� �޼��� ť�� ������� ��� �޼����� ���� ������ ���

    // PeekMessage : �޼����� ������ ��ȯ��
    while (GetMessage(&message, 0, 0, 0))
    {
        
         TranslateMessage(&message); // Ű������ �Է� �޼����� ó��, �Էµ� Ű�� ���� Ű���� Ȯ���ϰ� �빮�� Ȥ�� �ҹ���, �ѱ�, ���������� ���� WM_CHAR �޼����� �߻���Ŵ 
         DispatchMessage(&message); // ������ ���ν������� ���޵� �޼����� ���� ������� ����
        
    }

    return message.wParam;
}



//
//  �Լ�: MyRegisterClass()
//
//  �뵵: â Ŭ������ ����մϴ�.
//



//
//   �Լ�: InitInstance(HINSTANCE, int)
//
//   �뵵: �ν��Ͻ� �ڵ��� �����ϰ� �� â�� ����ϴ�.
//
//   �ּ�:
//
//        �� �Լ��� ���� �ν��Ͻ� �ڵ��� ���� ������ �����ϰ�
//        �� ���α׷� â�� ���� ���� ǥ���մϴ�.
//

//
//  �Լ�: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  �뵵: �� â�� �޽����� ó���մϴ�.
//
//  WM_COMMAND  - ���ø����̼� �޴��� ó���մϴ�.
//  WM_PAINT    - �� â�� �׸��ϴ�.
//  WM_DESTROY  - ���� �޽����� �Խ��ϰ� ��ȯ�մϴ�.
//
//

// ������ ���ν����� ���� WndProc
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) // i = interface
// hWnd : ��� �����쿡�� �߻��� �޼������� ����
// imessage : �޼��� ���� ��ȣ
// wParam : unsigned int ���콺 ��ư�� ���� / Ű���� ���� Ű�� ���¸� ����
// lParam : unsigned long ���콺 Ŭ�� �·Ḧ ����

{
    switch (iMessage)
    {
    case WM_CREATE: // �����ڶ� ����
        break;
    
   
    //case WM_PAINT: // 
    //{
    //    PAINTSTRUCT ps;
    //    HDC hdc = BeginPaint(hWnd, &ps);
    //    
    //    EndPaint(hWnd, &ps);
    //}
    //break;

    case WM_DESTROY:
        PostQuitMessage(0); // �� �Լ��� �ż��� ť�� QUIT �޼����� ������ ������ ����, Quit �޼����� �����ϴ� ���� GetMessage�� FALSE�� ��ȯ�ϹǷ� �޼��� ������ �����
        return 0;
        break;
        
    }

    return DefWindowProc(hWnd, iMessage, wParam, lParam);
}

// ���� ��ȭ ������ �޽��� ó�����Դϴ�.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
