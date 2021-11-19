//
//  Alexandre Tahery
//
//  taheryalexandre@gmail.com
//

#ifndef Binding_Socket_hpp
#define Binding_Socket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket : public SimpleSocket
    {
        public:
            BindingSocket(int domain, int service, int protocol, int port, u_long interface);
            ~BindingSocket();
            int ConnectToNetWork(int sock, struct sockaddr_in address);
    };
}

#endif /*Binding_Socket_hpp*/