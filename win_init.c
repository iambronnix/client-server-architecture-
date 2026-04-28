#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main()
{
	WSADATA d

	if(WSAStartup(MAKEWORD(2, 2), &d))
	{
		printf("Failed to initialize.\n");
		exit(1);
	}

	WSACleanup();
	printf("ok.\n");
	return 0;
}