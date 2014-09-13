#include "sender_a_stage2.h"

void *sender_stage2(void *val){
    register_signal();
}

int send_packet_stage2(struct node *data_node){
    struct sockaddr *to = (struct sockaddr *)&globals.serv_addr;
    int tolen = sizeof(struct sockaddr);

    int n = sendto(globals.a_sender_fd, data_node->mem_ptr, data_node->size, 0, to, tolen);
    return n;
}
