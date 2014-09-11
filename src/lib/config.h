#pragma once

#define CONFIG_INIT { \
    .packet_size = 1000, \
    .a_recv_port = 3005, \
    .b_recv_port = 2005, \
    .total_size = 0, \
    .rtt = 2, }

struct config {
    // Port to recieve data at NodeA
    uint16_t a_recv_port;
    // Port to recieve data at NodeB
    uint16_t b_recv_port;
    // RTT of the toplogy
    uint16_t rtt;
    // Packet size to be send
    long long unsigned int packet_size;
    // Total size of the file which is send over network
    long long unsigned int total_size;
};


