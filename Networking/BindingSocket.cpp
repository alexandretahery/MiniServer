//
//  Alexandre Tahery
//
//  taheryalexandre@gmail.com
//

#include "BindingSocket.hpp"

HDE::BindingSocket::BindingSocket(int domain, 
int service,
int protocol,
int port,
u_long interface) : 
SimpleSocket(domain, 
service, 
protocol, 
port, 
interface)
{
    SetConnection(ConnectToNetWork(GetSock(), GetAddress()));
    TestConnection(GetConnection());
}

int HDE::BindingSocket::ConnectToNetWork(int sock, struct sockaddr_in address)
{
    return bind (sock, (struct sockaddr *) &address, 
    sizeof(address));
}