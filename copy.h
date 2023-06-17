#pragma once

namespace mt
{
    void *cpy(void *dst, const void *src, size_t n)
    {
        int i, m;
        unsigned long *wdst = (unsigned long*) dst;
        unsigned long *wsrc = (unsigned long*) src;
        unsigned char *cdst, *csrc;

        for (i = 0, m = n / sizeof(long); i < m; i++)
        {
            *(wdst++) = *(wsrc++);
        }

        cdst = (unsigned char*) wdst;
        csrc = (unsigned char*) wsrc;

        for (i = 0, m = n % sizeof(long); i < m; i++)
            *(cdst++) = *(csrc++);

        return dst;
    }
}
