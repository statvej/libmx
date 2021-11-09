#include <stdlib.h>

typedef struct s_list{ 
void *data;
struct s_list *next;
}t_list;

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int count);

int mx_bubble_sort(char **arr, int size);

void mx_foreach(int *arr, int size, void (f)(int));

int mx_strlen(const char *s);

unsigned long mx_hex_to_nbr(const char *hex);

double mx_pow(double n, unsigned int pow);

void mx_printchar(char c);

void mx_printint(int n);

void mx_printstr(const char *s);

void mx_strdel(char **str);

char *mx_strcat(char *s1, const char *s2);

char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2);

char *mx_strnew(const int size);

void mx_swap_char(char *s1, char *s2);

int mx_sqrt(int x);

void mx_str_reverse(char *s);

char *mx_strncpy(char *dst, const char *src, size_t len);

void *mx_memset(void *b, int c, size_t len);

char *mx_strndup(const char *str, int len);

int mx_memcmp(const void *s1, const void *s2, size_t n);

void *mx_realloc(void *ptr, size_t size);

int mx_get_char_index(const char *str, char c);

int mx_count_substr(const char *str, const char *sub);

int mx_count_words(char *str, char c);

char *mx_strstr(const char *haystack, const char *needle);

char *mx_unconstchar(const char *s);

void *mx_memchr(const void *s, int c, size_t n);

int mx_get_substr_index(const char *str, const char *sub);
