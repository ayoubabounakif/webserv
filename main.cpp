#include "socketsIO.hpp"


int	main()
{
	sockets		sock(4242);
	socketsIO	server;
	sock.bindSock();
	sock.listener(10);
	sock.setNonBlock();
	server.setSock(sock);
	server.eventListener();
}