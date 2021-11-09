char *mx_strcpy(char *dst, const char *src) {

for (int count = 0; src[count] != '\0'; ++count)
    {
        dst[count] = src[count];
    }
return dst;
}
