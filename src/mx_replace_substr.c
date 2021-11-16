#include "../inc/libmx.h"
#include <stdio.h>
char *mx_replace_substr(const char *str, const char *sub, const char *replace){

    if (!str || !sub || !replace || (mx_strlen(str) <= mx_strlen(sub))) {
		return NULL;
    } 

	int sum = mx_strlen(replace) - mx_strlen(sub);
	int len = mx_strlen(str) + mx_count_substr(str, sub) * sum;
	char *mem = mx_strnew(len);
	bool condition = false;

	for (int i = 0; i < len; i++, str++) {
		condition = false;
		if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub))) {
			str += mx_strlen(sub);
			for (int j = 0; j < mx_strlen(replace); i++, j++) {
				mem[i] = replace[j];
            }
			condition = true;
		}
		mem[i] = *str;
		if (condition) {
			str--;
			i--;
		}
	}
	return mem;
}

