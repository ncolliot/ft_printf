size_t strlcpy(char *dest, const char *src, const size_t len)
{
    size_t i;
    // size_t = unsigned integral type
    i = 0;
    while(i < len - 1)
    {
        if(*src != "\0")
        *dest++ = *src++;
        else
        break;
        i++;
    }
    *dest = "\0";
    return(i);
}