#include "socketsIO.hpp"
#include "sockets.hpp"


int	main()
{
	sockets		sock(4242);
	socketsIO	server;
	// sock.setNonBlock();
	sock.bindSock();
	sock.listener(10);
	server.setSock(sock);
	server.eventListener();
}
