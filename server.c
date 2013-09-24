#include <sys/socket.h>:wq
#include <netinet/in.h>
#include <stdio.h>
#include <errno.h>


#include<sys/types.h>
#include<sys/socket.h>
#include <stdio.h>
#include<unistd.h>
#include<strings.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<sys/time.h>
#include<sys/types.h>
#include<sys/select.h>
#include<string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>


void err_exit()//displays error 
{
	perror("server");
	exit(1);
}

struct ack
{
	uint16_t opcode;
	uint16_t blocknum;

}mypacket;



int main(int argc, char**argv)
{
   int sockfd,n;
   struct sockaddr_in servaddr,cliaddr;
   socklen_t len;
   char mesg[1000];
	char reva[3000];// dynamic array
	//reva=(int *) malloc(size*sizeof(int));
	//  	 sockfd=socket(AF_INET,SOCK_DGRAM,0);
	//
	//
	//  	 if (argc != 2) {
	//  	 	fprintf(stderr, "error insert port number\n", argv[0]);
	//  	 		exit(0);
	//  	 		    }
	//
	//
	//
	//
	//  	 		       bzero(&servaddr,sizeof(servaddr));
	//  	 		          servaddr.sin_family = AF_INET;
	//  	 		             servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	//  	 		                servaddr.sin_port=htons(4567);
	//  	 		                   
	//  	 		                   	if(bind(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr))<0){
	//  	 		                   		err_exit();}
	//
	//
	//  	 		                   			
	//
	//
	//
	//
	//  	 		                   			   for (;;)
	//  	 		                   			      {
	//  	 		                   			            len = sizeof(cliaddr);
	//  	 		                   			                  n = recvfrom(sockfd,reva,sizeof(*reva),0,(struct sockaddr *)&cliaddr,&len);
	//  	 		                   			                        
	//  	 		                   			                              sendto(sockfd,mesg,n,0,(struct sockaddr *)&cliaddr,sizeof(cliaddr));
	//  	 		                   			                                    printf("-------------------------------------------------------\n");
	//  	 		                   			                                          mesg[n] = 0;
	//  	 		                   			                                                printf("Received the following:\n");
	//  	 		                   			                                                      printf("%s",mesg);
	//  	 		                   			                                                            printf("-------------------------------------------------------\n");
	//  	 		                   			                                                              
	//
	//  	 		                   			                                                                  
	//  	 		                   			                                                                  	char *p;
	//  	 		                   			                                                                  	    p = strtok(reva+4, " ");
	//  	 		                   			                                                                  	     char str[128];
	//  	 		                   			                                                                  	         if(p)
	//  	 		                   			                                                                  	            {
	//  	 		                   			                                                                  	                sprintf(str,"%s\n", p);//saves the file name
	//  	 		                   			                                                                  	                  }
	//  	 		                   			                                                                  	                      printf("%s", str);
	//
	//
	//
	//
	//
	//
	//
	//
	//  	 		                   			                                                                  	                            else
	//  	 		                   			                                                                  	                                  {err_exit();}
	//  	 		                   			                                                                  	                                    
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//  	 		                   			                                                                  	                                     }
	//
	//  	 		                   			                                                                  	                                     	
	//
	//
	//
	//
	//
	//
	//  	 		                   			                                                                  	                                     	}
