int mx_sqrt(int x)
{
    int result;
    int i;
    if (x < 0)
    {

        return 0;
    }

    for (i = 0; i < x; ++i)
    {

        result = i * i;

        if (result == x)
        {

            return i;
        }
    }
    return i;
}
