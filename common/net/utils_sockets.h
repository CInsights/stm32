/*
 * Socket and address related utilities
 *
 */

#ifndef UTILS_SOCKETS_H_
#define UTILS_SOCKETS_H_

#include "lwipthread.h"
#include "lwip/sockets.h"
#include "lwip/ip_addr.h"

#define ETH_MTU 1500

/* Convenience functions for filling out structs and setting up sockets */
void set_lwipthread_opts(struct lwipthread_opts * ip_opts,
    const char * ip, const char * netmask, const char * gateway, uint8_t * mac);
void set_sockaddr(struct sockaddr_in * addr, const char * ip, int port);
int get_udp_socket(const struct sockaddr *addr);

#endif


