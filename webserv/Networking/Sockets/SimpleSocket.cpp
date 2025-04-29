

#include "SimpleSocket.hpp"

SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
	//define adresse structure
	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(interface);
	//establish socket
	sock = socket(domain, service, protocol);
	test_connection(sock);
	//bind
}

void SimpleSocket::test_connection(int item_to_test)
{
	//confirms that the sock or connection has been properly established.
	if (item_to_test < 0)
	{
		perror("Failed to connect");
		exit(EXIT_FAILURE);
	}
}


//getter functions
struct sockaddr_in SimpleSocket::get_address()
{
	return address;
}

int SimpleSocket::get_sock()
{
	return sock;
}

int SimpleSocket::get_connection()
{
	return connection;
}

void SimpleSocket::set_connection(int con)
{
	connection = con;
}
