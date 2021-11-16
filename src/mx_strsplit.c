#include "../inc/libmx.h"
char **mx_strsplit(const char *s, char c){
    if(!s){
        return 0;
    }

    if(mx_strlen(s) == 0){
        return 0;
    }

    int words_counter = mx_count_words(s, c);
    char **words = (char**)malloc(sizeof(char*) * (words_counter + 1));
    char *trimmed_string = mx_strtrim_delim(s, c);
    while(*trimmed_string == c){
        trimmed_string++;
    }
    for(int i = 0; i < words_counter; i++){
        char *string_to_append = 0;
        while(*trimmed_string != c && *trimmed_string){
            char temp[2] = {*trimmed_string, '\0'};
            string_to_append = mx_strjoin(string_to_append, temp);
            trimmed_string++;
        }
        words[i] = string_to_append;
        while(*trimmed_string == c)
            trimmed_string++;
    }
    words[words_counter] = 0;
    return words;

}

