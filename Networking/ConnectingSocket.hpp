//
//  Alexandre Tahery
//
//  taheryalexandre@gmail.com
//

#ifndef Connecting_Socket_hpp
#define Connecting_Socket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
    class ConnectingSocket : public SimpleSocket
    {
        public:
            ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
            ~ConnectingSocket();
            int ConnectToNetWork(int sock, struct sockaddr_in address);
    };
}

#endif /*Connecting_Socket_hpp*/