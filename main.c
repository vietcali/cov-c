#include <stdint.h>

int main()
{
    uint64_t val = 0xFFFFFFFFULL;
    uint32_t val2 = 0U;
    val2 = (uint32_t)(val >> 32U);
    return 0;
}
