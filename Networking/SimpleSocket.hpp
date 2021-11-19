//
//  Alexandre Tahery
//
//  taheryalexandre@gmail.com
//

#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
    class SimpleSocket
    {
    private:
        int sock;
        struct sockaddr_in address;
        int connection;

    public:
        SimpleSocket(int domain,
        int service,
        int protocol,
        int port,
        u_long interface
        );
        ~SimpleSocket();
        virtual int ConnectToNetWork(int sock, struct sockaddr_in address) = 0;
        void TestConnection(int item_to_test);
        // Getter Function
        struct sockaddr_in GetAddress();
        int GetSock();
        int GetConnection();
        // Set Function
        void SetConnection(int con);
    };
}


#endif /*SimpleSocket_hpp*/