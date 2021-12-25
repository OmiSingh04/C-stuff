#define PORT 9991
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#include<sys/socket.h>
#include<netinet/in.h>


//this is a simple server which sends a message when a request is sent.

int main(int argc, char* argv[]){
	/*
	server after receiving request simply creates a new server so its open for other requests. 
	In unix based operating systems, the sockets are files, with file descriptors, which is used to access the socket.
	*/

	int server_fd, sock_fd;
	char* message = "Hello from the server";
	size_t addrlen = 0;

	/*
	socket function creates a new socket and returns the fd
	args - (int) internet domain - AF_INET, (int) type - SOCK_STREAM - reliable two way connection based byte stream, (int) protocol - 0
	*/

	server_fd = socket(AF_INET, SOCK_STREAM, 0);
		
	if(server_fd == 0){
		perror("socket creation failed");
		exit(EXIT_FAILURE);
	}

	/*creating the address, the challenging part.*/

	struct sockaddr_in address;

	memset(&address, 0, sizeof(address));
	/*
	bind function takes the socket, sockaddr struct, which we give through explicit type conversion, and sizeof the address
	*/
	address.sin_family = AF_INET;//IPV4
	address.sin_addr.s_addr = INADDR_ANY;//theres a big 
	address.sin_port = htons(PORT);
	
	if(bind(server_fd, (struct sockaddr*) &address, sizeof(address)) < 0){
		perror("bind failure");
		exit(EXIT_FAILURE);
	}
	
	/*
	now if the bind is done, its ready to listen for requests.	
	
	listen() takes the server_fd, marks it as a passive socket, a socket which is used to accept incoming connections
	it also takes backlog, the max length of queue of pending connections. if a new request comes when the queue is full, it sends a ECONNREFUSED
	*/

	if(listen(server_fd, 3) < 0){
		perror("listening");
		exit(EXIT_FAILURE);
	}

	
	if((sock_fd = accept(server_fd, (struct sockaddr*) &address, (socklen_t*) &addrlen)) < 0){
		perror("accepting");
		exit(EXIT_FAILURE);
	}

	send(sock_fd, message, strlen(message), 0);
	printf("message sent");
	
}
