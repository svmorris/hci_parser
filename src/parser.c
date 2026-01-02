#include <stdio.h>
#include <../include/hcip.h>


int parse_hci(uint8_t *buffer, size_t buf_len, hci_pkt pkt)
{
    if (buffer == NULL || buf_len < 3)
        return PARSE_EINVAL;


    return 0;
}
