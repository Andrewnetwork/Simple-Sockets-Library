// SocketCommunicator.h
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
	const unsigned int MAX_DIGIT_MESSAGE_SIZE = 50;
	const string NO_MESSAGE_RECEIVED = "";

	class SocketCommunicator
	{
	private:

		SOCKET comStream; 

	public:

		SocketCommunicator( SOCKET sock );
	
		bool write( string message );

		string read();

	};
}