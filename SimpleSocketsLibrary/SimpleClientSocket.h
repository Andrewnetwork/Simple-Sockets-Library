// SimpleClientSocket.h
// Andrew Ribeiro 
// March 4, 2011

#pragma once

#include <windows.h>
#include <conio.h>
#include <string>
#include <winsock.h>

#include "..\SimpleSocketsLibrary\SimpleSocket.h"

using namespace std;

namespace AndrewRibeiro
{
	class SimpleClientSocket : public SimpleSocket
	{

	public:

		SOCKET connectToServer( string serverIP, string serverPort );

	};
}