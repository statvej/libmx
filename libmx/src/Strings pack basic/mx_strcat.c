int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2)
{
    int c = 0;
    int b = 0;
    int d = 0;
    int i = 0;
    d = mx_strlen(s2);
    i = mx_strlen(s1);
    char s3[i + d];
    while (s1[c] != '\0')
    {
        s3[c] = s1[c];
        ++c;
    }
    while (s2[b] != '\0')
    {

        s3[c + b] = s2[b];
        ++b;
    }
    printf("%s", s3);
    return s3;
}