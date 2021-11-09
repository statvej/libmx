all:
	mkdir obj
	clang -c src/Utils pack basic/mx_bubble_sort.c -o obj/mx_bubble_sort.o
	clang -c src/Utils pack basic/mx_printchar.c -o obj/mx_printchar.o
	clang -c src/Utils pack basic/mx_printint.c -o obj/mx_printint.o
	clang -c src/Utils pack basic/mx_printstr.c -o obj/mx_printstr.o
	clang -c src/Utils pack basic/mx_quicksort.c -o obj/mx_quicksort.o
	clang -c src/Util pack advanced/mx_binary_search.c -o obj/mx_quicksort.o
	clang -c src/Util pack advanced/mx_foreach.c -o obj/mx_foreach.o
	clang -c src/Util pack advanced/mx_hex_to_nbr.c -o obj/mx_hex_to_nbr.obj
	clang -c src/Util pack advanced/mx_pow.c -o obj/mx_pow.o
	clang -c src/Util pack advanced/mx_sqrt.c -o obj/mx_sqrt.o
    clang -c src/Strings pack basic/mx_strcat.c -o obj/mx_strcat.o
	clang -c src/Strings pack basic/mx_strcmp.c -o obj/mx_strcmp.o
	clang -c src/Strings pack basic/mx_strcpy.c -o obj/mx_strcpy.o
	clang -c src/Strings pack basic/mx_strdel.c -o obj/mx_strdel.o
	clang -c src/Strings pack basic/mx_strdup.c -o obj/mx_strdup.o
	clang -c src/Strings pack basic/mx_strjoin.c -o obj/mx_strjoin.o
	clang -c src/Strings pack basic/mx_strlen.c -o obj/mx_strlen.o
	clang -c src/Strings pack basic/mx_strnew.c -o obj/mx_strnew.o
	clang -c src/Strings pack basic/mx_swap_char.c -o obj/mx_swap_char.o
	clang -c src/Strings pack advanced/mx_count_substr.c -o obj/mx_count_substr.o
	clang -c src/Strings pack advanced/mx_count_words.c -o obj/mx_count_words.o
	clang -c src/Strings pack advanced/mx_get_char_index.c -o obj/mx_get_char_index.o
	clang -c src/Strings pack advanced/mx_str_reverse.c -o obj/mx_str_reverse.o
	clang -c src/Strings pack advanced/mx_strncpy.c -o obj/mx_strncpy.o
	clang -c src/Strings pack advanced/mx_strndup.c -o obj/mx_strndup.o
	clang -c src/Strings pack advanced/mx_strstr.c -o obj/mx_strstr.o
	clang -c src/Strings pack advanced/mx_unconstchar.c -o obj/mx_unconstchar.o
	clang -c src/Strings pack advanced/mx_get_substr_index.c -o obj/mx_get_substr_index.o
	clang -c src/Memory pack basic/mx_memcmp.c -o obj/mx_memcmp.o
	clang -c src/Memory pack basic/mx_memset.c -o obj/mx_memset.o
	clang -c src/Memory pack basic/mx_realloc.c -o obj/mx_realloc.o
	clang -c src/Memory pack advanced/mx_memch.c -o obj/mx_memch.o

	ar rcs libmx.a obj/mx_bubble_sort.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_quicksort.o \
	obj/mx_quicksort.o obj/mx_foreach.o obj/mx_hex_to_nbr.obj obj/mx_pow.o obj/mx_sqrt.o obj/mx_strcat.o \
	obj/mx_strcmp.o obj/mx_strcpy.o obj/mx_strdel.o obj/mx_strdup.o obj/mx_strjoin.o obj/mx_strlen.o obj/mx_swap_char.o \
	obj/mx_count_substr.o obj/mx_count_words.o obj/mx_get_char_index.o obj/mx_str_reverse.o obj/mx_strncpy.o obj/mx_strndup.o \
	obj/mx_strstr.o obj/mx_unconstchar.o obj/mx_memcmp.o obj/mx_memset.o obj/mx_realloc.o obj/mx_memch.o obj/mx_get_substr_index.o 
 



clean:
	rm -rf src inc

uninstall:
    rm -rf obj libmx.a

reinstall: 
	rm -rf obj libmx.a

	mkdir obj
	clang -c src/Utils pack basic/mx_bubble_sort.c -o obj/mx_bubble_sort.o
	clang -c src/Utils pack basic/mx_printchar.c -o obj/mx_printchar.o
	clang -c src/Utils pack basic/mx_printint.c -o obj/mx_printint.o
	clang -c src/Utils pack basic/mx_printstr.c -o obj/mx_printstr.o
	clang -c src/Utils pack basic/mx_quicksort.c -o obj/mx_quicksort.o
	clang -c src/Util pack advanced/mx_binary_search.c -o obj/mx_quicksort.o
	clang -c src/Util pack advanced/mx_foreach.c -o obj/mx_foreach.o
	clang -c src/Util pack advanced/mx_hex_to_nbr.c -o obj/mx_hex_to_nbr.obj
	clang -c src/Util pack advanced/mx_pow.c -o obj/mx_pow.o
	clang -c src/Util pack advanced/mx_sqrt.c -o obj/mx_sqrt.o
    clang -c src/Strings pack basic/mx_strcat.c -o obj/mx_strcat.o
	clang -c src/Strings pack basic/mx_strcmp.c -o obj/mx_strcmp.o
	clang -c src/Strings pack basic/mx_strcpy.c -o obj/mx_strcpy.o
	clang -c src/Strings pack basic/mx_strdel.c -o obj/mx_strdel.o
	clang -c src/Strings pack basic/mx_strdup.c -o obj/mx_strdup.o
	clang -c src/Strings pack basic/mx_strjoin.c -o obj/mx_strjoin.o
	clang -c src/Strings pack basic/mx_strlen.c -o obj/mx_strlen.o
	clang -c src/Strings pack basic/mx_strnew.c -o obj/mx_strnew.o
	clang -c src/Strings pack basic/mx_swap_char.c -o obj/mx_swap_char.o
	clang -c src/Strings pack advanced/mx_count_substr.c -o obj/mx_count_substr.o
	clang -c src/Strings pack advanced/mx_count_words.c -o obj/mx_count_words.o
	clang -c src/Strings pack advanced/mx_get_char_index.c -o obj/mx_get_char_index.o
	clang -c src/Strings pack advanced/mx_str_reverse.c -o obj/mx_str_reverse.o
	clang -c src/Strings pack advanced/mx_strncpy.c -o obj/mx_strncpy.o
	clang -c src/Strings pack advanced/mx_strndup.c -o obj/mx_strndup.o
	clang -c src/Strings pack advanced/mx_strstr.c -o obj/mx_strstr.o
	clang -c src/Strings pack advanced/mx_unconstchar.c -o obj/mx_unconstchar.o
	clang -c src/Strings pack advanced/mx_get_substr_index.c -o obj/mx_get_substr_index.o
	clang -c src/Memory pack basic/mx_memcmp.c -o obj/mx_memcmp.o
	clang -c src/Memory pack basic/mx_memset.c -o obj/mx_memset.o
	clang -c src/Memory pack basic/mx_realloc.c -o obj/mx_realloc.o
	clang -c src/Memory pack advanced/mx_memch.c -o obj/mx_memch.o

	ar rcs libmx.a obj/mx_bubble_sort.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_quicksort.o \
	obj/mx_quicksort.o obj/mx_foreach.o obj/mx_hex_to_nbr.obj obj/mx_pow.o obj/mx_sqrt.o obj/mx_strcat.o \
	obj/mx_strcmp.o obj/mx_strcpy.o obj/mx_strdel.o obj/mx_strdup.o obj/mx_strjoin.o obj/mx_strlen.o obj/mx_swap_char.o \
	obj/mx_count_substr.o obj/mx_count_words.o obj/mx_get_char_index.o obj/mx_str_reverse.o obj/mx_strncpy.o obj/mx_strndup.o \
	obj/mx_strstr.o obj/mx_unconstchar.o obj/mx_memcmp.o obj/mx_memset.o obj/mx_realloc.o obj/mx_memch.o obj/mx_get_substr_index.o 
