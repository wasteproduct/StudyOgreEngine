#include <Windows.h>

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMessage, WPARAM wParam, LPARAM lParam);

int WINAPI WindowMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	/*WNDCLASSEX ff;
	ff.
	WNDCLASS www;
	CreateWindow()*/

	WNDCLASS windowClass;
	ZeroMemory(&windowClass, sizeof(WNDCLASS));

	windowClass.cbClsExtra = 0;
	windowClass.cbWndExtra = 0;
	windowClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	windowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	windowClass.hInstance = hInstance;
	windowClass.lpfnWndProc = WindowProcedure;
	windowClass.lpszClassName

	HWND mainWindow;
	mainWindow = CreateWindow(L"StudyOgre", L"StudyOgre", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,
		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);

	ShowWindow(mainWindow, SW_SHOW);
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMessage, WPARAM wParam, LPARAM lParam)
{
	switch (uMessage)
	{
	case WM_DESTROY:case WM_QUIT:case WM_CLOSE:
		PostQuitMessage(0);
		return 0;

	default:
		return DefWindowProc(hWnd, uMessage, wParam, lParam);
	}
}
