#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT = 2100
int main(int port){

	/*
	1ST ARG: FAMILY
	AF_INET -> IPV4
	AF_INET6 -> IPV6


	2ND ARG: SOCKET TYPE
	SOCK_STREAM -> stream socket (TCP)
	SOCK_DGRAM -> datagram socket (UDP)

	3RD ARG: PROTOCOL
	VALUE OF THE PROTOCOL
	0 FOR IP
	*/
	int serverfd = socket(AF_INET, SOCK_STREAM, 0);//serverfd is like an identifier for the socket

	if(serverfd == 0)
		EXIT(EXIT_FAILURE);

	//BIND


	return 0;
}
