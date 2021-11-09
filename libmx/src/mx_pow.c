double mx_pow(double n, unsigned int pow)
{
    unsigned int f = n;
    unsigned int i = 1;

    if (pow == 0)
    {
        return 1;
    }

    while (i != pow)
    {

        n = n * f;
        i++;
    }
    return n;
}
