#include <windows.h>

// the entry point for any Windows program
int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	// create a "Hello World" message box using MessageBox()
	MessageBox(NULL,
		"Hello-Game",
		"Just another Hello World program!",
		MB_ICONEXCLAMATION | MB_OK);

	// return 0 to Windows
	return 0;
}