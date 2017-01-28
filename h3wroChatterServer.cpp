// Server code
// Author: Szymon Kocur

#include <stdio.h>
#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main(int argc, char * argv[])
{
	WSADATA wsa;
	int result = WSAStartup(MAKEWORD(2, 2), &wsa);

	SOCKET mainSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	sockaddr_in service;
	memset(&service, 0, sizeof(service));
	service.sin_family = AF_INET;
	service.sin_addr.s_addr = inet_addr("127.0.0.1");
	service.sin_port = htons(27015);

	int bindSocket = bind(mainSocket, (SOCKADDR *)& service, sizeof(service));

	if (listen(mainSocket, 1) == SOCKET_ERROR) {
		printf("Error: listening on socket.\n");
	}

	SOCKET acceptSocket = SOCKET_ERROR;
	printf("Waiting for client to connect ... \n");

	while (acceptSocket == SOCKET_ERROR) {
		acceptSocket = accept(mainSocket, NULL, NULL);
	}

	printf("Client connected!\n");
	mainSocket = acceptSocket;

	int bytesSent;
	int bytesRecv = SOCKET_ERROR;
	char recvbuf[100] = "";

	while (bytesRecv == SOCKET_ERROR) {
		bytesRecv = recv(mainSocket, recvbuf, 100, 0);
		std::cout << "Client: " << recvbuf << std::endl;
		char sendbuf[100];
		std::cout << "You: ";
		std::cin >> sendbuf;
		bytesSent = send(mainSocket, sendbuf, 100, 0);
		std::cout << "Bytes sent: " << bytesSent << std::endl;
		bytesRecv = SOCKET_ERROR;
	}

	getchar();
	return 0;
}