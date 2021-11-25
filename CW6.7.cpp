#include <cstdio>
#include <cstdint>

int main ()
{
    uint16_t x = 0x0001;
    printf("%s-endian\n", *((uint8_t *) &x) ? "little" : "big");
}