/*
C - Network Programming with Python & C
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : ButtonGUI
Created on : Mon Jun 19 11:27 2017

Write with Emacs-Nox ─────────────────────────────────┐
Socket Server in C to works with Python3 server ──────┘
*/

#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <netinet/in.h>

#include <string.h>

void doprocessing (int sock);                        // Handle Multiple Connections

int main(int argc, char *argv[] ) {
    int sockfd, newsockfd, portno, clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n, pid;                                      // +pid to HMC

    // First call socket() function
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) {
	perror("ERROR opening socket");
	exit(1);
    }

    // Initialize socket structure
    bzero((char *) &serv_addr, sizeof(serv_addr));
    portno = 5001;

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);

    // Now bin the host address using bind() call.
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
	perror("ERROR on binding");
	exit(1);
    }

    // Now start listening for the clients, here process will
    //  * go in sleep mode and will wait for the incoming connection

    listen(sockfd,5);
    clilen = sizeof(cli_addr);

    // HCM with while
    while (1){
	// Accept actual connection from client
	newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, &clilen);
	
	if (newsockfd < 0) {
	    perror("ERROR on accept");
	    exit(1);
	}

	// Create child process
	pid = fork();

	if (pid < 0) {
	    perror("ERROR on fork");
	    exit(1);
	}

	if (pid ==0) {
	    // This is the client process
	    close(sockfd);
	    doprocessing(newsockfd);
	    exit(0);
	}
	else {
	    close(newsockfd);
	}
    } // End of the HCM while
    
    // If connection is established then start communicating
    bzero(buffer, 256);
    n = read( newsockfd,buffer,255 );

    if (n < 0) {
	perror("ERROR reading from socket");
	exit(1);
    }

    printf("Here is the message: %s\n",buffer);

    // Write a response to the client
    n = write(newsockfd,"I got your message",18);

    if (n < 0) {
	perror("ERROR reading from socket");
	exit(1);
    }

    return 0;
}
