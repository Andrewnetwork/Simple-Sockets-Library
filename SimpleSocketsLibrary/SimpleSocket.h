// SimpleSocket.h
// Andrew Ribeiro 
// March 4, 2011

#pragma once

#include <windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <winsock.h>

using namespace std; 

namespace AndrewRibeiro
{
	const class SimpleSocket
	{
	protected:
		WSADATA       wsaData;
		SOCKET        hSocket;
		SOCKADDR_IN   SockAddr;
		bool initilized; 

	public:

		string init();

	};
}