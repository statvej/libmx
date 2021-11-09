void mx_printchar(char c);
void mx_printint(int n)
{
    if (n == 0)
    {
        mx_printchar('0');
        return;
    }
    else if (n > 0)
    {
        int comper = 1000000000;
        int fnumber;
        while (n / comper < 1)
        {
            comper = comper / 10;
        }
        while (comper >= 1)
        {
            fnumber = n / comper + 48;
            mx_printchar(fnumber);
            n = n - (n / comper * comper);
            comper = comper / 10;
        }
    }
    else if (n < 0 && n > -2147483648)
    {
        n = n * -1;
        int comper = 1000000000;
        int fnumber;
        while (n / comper < 1)
        {
            comper = comper / 10;
        }
        mx_printchar('-');
        while (comper >= 1)
        {
            fnumber = n / comper + 48;
            mx_printchar(fnumber);
            n = n - (n / comper * comper);
            comper = comper / 10;
        }
    }
    else if (n == -2147483648)
    {
        n = 147483648;
        int comper = 1000000000;
        int fnumber;
        while (n / comper < 1)
        {
            comper = comper / 10;
        }
        mx_printchar('-');
        mx_printchar('2');
        while (comper >= 1)
        {
            fnumber = n / comper + 48;
            mx_printchar(fnumber);
            n = n - (n / comper * comper);
            comper = comper / 10;
        }
    }
}
