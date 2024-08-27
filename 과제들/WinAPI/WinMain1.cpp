// WindowsProject1.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
//
//#include "pch.h"
//#include "framework.h"
//#include "WindowsProject1.h"
// 게임이 아닌 윈도우에서 동작하는 앱을 정의하는 것임

#pragma region WinAPI
/*
* 
* LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; // 멀티 바이트, L은 유니코드를 뜻함 W는 멀티 
TCHAR * script3 = _T("ABC"); // 컴퓨터가 알아서 멀티는 멀티로 유니는 유니로 (바꾸는 절차가 필요하므로 퍼포먼스는 떨어짐)
*/
#pragma endregion

#include <Windows.h> // 가벼운 친구가 아님, 
#include <tchar.h> // text Character

// 전역 변수:
HINSTANCE _hInstance; // 현재 인스턴스입니다.
HWND _hWnd; // 핸들 : 윈도우 창, 최상위 객체 = 윈도우 타이틀 
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//진입점，　（world wide）　
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)

{
    _hInstance = hInstance;

    // 1 - 1 윈도우 창 구조체 선언 및 초기화
    //WNDCLASSEXW wndclass;  ex는 extend라는 것을 나타냄 
    WNDCLASS wndclass;

    // 순서가 바뀌어도 지장은 없는데 이것이 정석
    wndclass.cbClsExtra = 0; // CLS = 클래스, 0은 사용 안함, Extra = 여분 메모리 할당 
    wndclass.cbWndExtra = 0; // Wnd = 윈도우
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); // hbr 핸들 브러쉬 ~, background = 창의 배경 색
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW); // IDC_ARROW = 커서의 모양 
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION); // MAKEINTRESOURCE = 외부에서 가져오겠다, 왼쪽 상단의 마크 
    wndclass.hInstance = hInstance;
    wndclass.lpfnWndProc = (WNDPROC)WndProc; // 추론하지말고 그냥 암기하자 = long pointer functional numbering, 정의를 하지 않으면 0부터 시작
    wndclass.lpszClassName = _lpszClass; // 윈도우 창 타이틀 이름, 현재는 LPTSTR _lpszClass = TEXT("Windows API") 이거
    wndclass.lpszMenuName = NULL;
    wndclass.style = CS_HREDRAW | CS_VREDRAW; // 오른쪽 상단의 도구 상자 

    // 1-2 윈도우 클래스 등록
    RegisterClass(&wndclass);

    // 1- 3 화면에 보여줄 윈도우 창 생성 
    _hWnd = CreateWindowW
    (
        _lpszClass, // 윈도우 클래스 식별자
        _lpszClass, // 윈도우 타이블 바 이름
        WS_OVERLAPPEDWINDOW, // 윈도우 스타일 
        400, // 윈도우 화면 X 좌표
        100, // 윈도우 화면 Y 좌표
        800, // 윈도우 화면 가로 크기
        800, // 윈도우 화면 세로 크기
        NULL, // 부모 윈도우, NULL 데신 GetDesktopWindow() 윈도우에서는 여러 창을 띄울 수 있음 그렇게 하려면 시작 창을 정해줘야 함 이것을 마지막 매개변수랑 이어줄 수 있음 
        (HMENU)NULL, // 메뉴 핸들
        hInstance, // 인스턴스 지정
        NULL // 윈도우의 자식 윈도우를 생성하면 지정, 아니면 NULL
    );

    // 1 - 4 화면에 윈도우 창 보여주기
    ShowWindow(_hWnd, nCmdShow);

    // UpdateWindow(hWnd); // 갱신, 업데이트 (캐릭터 위치 같은) , 구려서 별도로 만듬


    // MSG : 운영체제에서 발생하는 메세지 정보를 저장하기 위한 구조체 
    MSG message;
    // ZeroMemory(&message, sizeof(message)); , 메모리를 0로 만듬 

    // ★★★★★ , 엔진에서도 보게 됨
    // 2. 기본 메시지 루프입니다: 
    // GetMessage : 메세지를 꺼내올 수 있을 때까지 대기
    // ㄴ 메세지 큐로부터 하나의 메세지를 가져오는 역할을 수행
    // ㄴ 다만 메세지 큐가 비어있을 경우 메세지가 들어올 때까지 대기

    // PeekMessage : 메세지가 없더라도 반환됨
    while (GetMessage(&message, 0, 0, 0))
    {
        
         TranslateMessage(&message); // 키보드의 입력 메세지를 처리, 입력된 키가 문자 키인지 확인하고 대문자 혹은 소문자, 한글, 영문인지에 대한 WM_CHAR 메세지를 발생시킴 
         DispatchMessage(&message); // 윈도우 프로시저에서 전달된 메세지를 실제 윈도우로 전달
        
    }

    return message.wParam;
}



//
//  함수: MyRegisterClass()
//
//  용도: 창 클래스를 등록합니다.
//



//
//   함수: InitInstance(HINSTANCE, int)
//
//   용도: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   주석:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//

//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  용도: 주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 애플리케이션 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//

// 윈도우 프로시저의 약자 WndProc
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) // i = interface
// hWnd : 어느 윈도우에서 발생한 메세지인지 구분
// imessage : 메세지 구분 번호
// wParam : unsigned int 마우스 버튼의 상태 / 키보드 조합 키의 상태를 전달
// lParam : unsigned long 마우스 클릭 좌료를 전달

{
    switch (iMessage)
    {
    case WM_CREATE: // 생성자랑 공유
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
        PostQuitMessage(0); // 이 함수는 매세지 큐에 QUIT 메세지를 보내는 역할을 수행, Quit 메세지를 수신하는 순간 GetMessage가 FALSE를 반환하므로 메세지 루프는 종료됨
        return 0;
        break;
        
    }

    return DefWindowProc(hWnd, iMessage, wParam, lParam);
}

// 정보 대화 상자의 메시지 처리기입니다.
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
