int mx_strlen(const char *s);

unsigned long mx_hex_to_nbr(const char *hex)
{

    long long decimal = 0, base = 1;
    int i = 0, length;

    length = mx_strlen(hex);
    for (i = length--; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }

    return decimal;
}
