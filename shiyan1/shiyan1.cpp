// shiyan1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "winsock.h"
#pragma comment(lib,"wsock32.lib")

int _tmain(int argc, _TCHAR* argv[])

{
	WSAData wsa;
	WSAStartup(0x101, &wsa);
	SOCKET s;
	s = socket(AF_INET, SOCK_DGRAM, 0);


	WSACleanup();

	return 0;
}

