#include <stdint.h>
#include<stdio.h>
// example for networking with exact data types
typedef struct {
    uint8_t version; // 1 byte
    uint16_t length; // 2 bytes
    uint32_t checksum; // 4 bytes
} PacketHeader;

typedef struct {
    uint32_t magic ; // 4 Bytes unsigned
    uint32_t fileSize; // 4 Bytes unsigned
    uint16_t flags ; // 2 Bytes
} FileHeader;


int main(int argc, char *argv[]) {
    /* Problem with x = 2 , size of int , usually it is 4 Bytes but it is dependent on the operating system
    *it can be 2 Bytes , 4 Bytes or in 64- Bit systems 8 Bytes
     * to avoid these problems usually, we do use other data types
     * like int8_t and uint8_t and int16_t , uint16_t , int32_t and uint32_t
     * int64_t and uint64_t
     * int8_t for signed integer 8 Bit from -127 to 128
     * uint8_t for unsigned integers 8 Bits from 0 to 255 etc. etc.
     */
    PacketHeader packet_header = {255,100,65555};
    printf("size of packetHeader=%d\n",sizeof(packet_header));
    printf("size of PacketHeader=%d\n",sizeof(PacketHeader)); // 8
    printf("size of FileHeader=%d\n",sizeof(FileHeader)); // 12

    // Check the Max in the Data type
    printf("MIN in int8_t = %d\n",INT8_MIN);
    printf("Max in int8_t = %d\n",INT8_MAX);
    printf("MIN in int16_t = %d\n",INT16_MIN);
    printf("Max in int16_t = %d\n",INT16_MAX);
    printf("MIN in int32_t = %d\n",INT32_MIN);

    printf("Max in int32_t = %d\n",INT32_MAX);



    printf("Max in uint8_t = %d\n",UINT8_MAX);
    printf("Max in uint16_t = %d\n",UINT16_MAX);
    printf("Max in uint32_t = %u\n",UINT32_MAX);
    printf("Max in uint64_t = %lu\n",UINT64_MAX);











    return 0;
}
