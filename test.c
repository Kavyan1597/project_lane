//Program to check whether system in little endian or big endian and to convert
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
void convert()
{
    uint32_t le=0x12345678;
    uint32_t be=__builtin_bswap32(le);
    printf("Little_endian: 0x%" PRIx32"\n",le);
    printf("Big_endian: 0x%" PRIx32"\n",be);
    return 0;

}
int main()
{
    unsigned int a=1;
    char *p=(char*)&a;
    if (*p)
    {
        printf("\nLittle Endian\n");
        convert();
    }
    else
    {
        printf("\nBig Endian\n");
    }
}
