#define SERVER_PORT 9991
#define MAX 1024

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main(int argc, char* argv[]){

	int sock_fd;
	struct sockaddr_in server_addr;
	
	char message[MAX];
	
	//sends request, gets message from server and prints the message.

	if((sock_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
		perror("couldnt create socket");
		exit(EXIT_FAILURE);
	}

	memset(&server_addr, 0, sizeof(server_addr));

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(SERVER_PORT);
	server_addr.sin_addr.s_addr = INADDR_ANY;

	if(connect(sock_fd, (struct sockaddr*) &server_addr, sizeof(server_addr)) < 0){
		perror("couldnt connect to server");
		exit(EXIT_FAILURE);
	}
	
	read(sock_fd, message, MAX);
	printf("message from server - %s\n", message);

	return 0;

}
