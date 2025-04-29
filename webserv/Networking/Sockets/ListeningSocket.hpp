

#ifndef LISTENINGSOCKET_HPP
# define LISTENINGSOCKET_HPP

# include "BindingSocket.hpp"
# include <stdio.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <iostream>

class ListeningSocket: public BindingSocket
{

	private:
	int backlog;
	int listening;

	public:
	ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bckg);
	void start_listening();
};

#endif
