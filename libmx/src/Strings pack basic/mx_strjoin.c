int mx_strlen(const char *s);
char *mx_strcat(char *s1, char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2)
{
    char *str_err;
    if (s1 == 0 && s2 == 0)
    {
        return 0;
    }
    else if (s2 == 0)
    {
        str_err = s1;
        return str_err;
    }
    else if (s1 == 0)
    {
        str_err = s2;
        return str_err;
    }

    else {
        return mx_strcat(mx_strdup(s1), mx_strdup(s2));
    }
}
