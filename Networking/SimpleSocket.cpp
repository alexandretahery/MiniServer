//
//  Alexandre Tahery
//
//  taheryalexandre@gmail.com
//

#include "SimpleSocket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain,
                                int service,
                                int protocol,
                                int port,
                                u_long interface)
{
    // Address Structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    // Establish Socket
    sock = socket(domain, service, protocol);
    TestConnection(connection);
    // // Establish Network Connection
    // connection = ConnectToNetWork(sock, address);
    // TestConnection(connection);
}

void HDE::SimpleSocket::TestConnection(int item_to_test)
{
    if (item_to_test < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in HDE::SimpleSocket::GetAddress()
{
    return address;
}

int HDE::SimpleSocket::GetSock()
{
    return sock;
}

int HDE::SimpleSocket::GetConnection()
{
    return connection;
}

void HDE::SimpleSocket::SetConnection(int con)
{
    connection = con;
}