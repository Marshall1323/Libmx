#include <unistd.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
// Utils pack
void mx_printchar(char c); //+ 
void mx_print_unicode(wchar_t c); //+-
void mx_printstr(const char *s); //+-
void mx_print_strarr(char **arr, const char *delim); //+
void mx_printint(int n); //+
double mx_pow(double n, unsigned int pow); //+
int mx_sqrt(int x); //+
char *mx_nbr_to_hex(unsigned long nbr); //+
unsigned long mx_hex_to_nbr(const char *hex); //+
char *mx_itoa(int number); //+
void mx_foreach(int *arr, int size, void(*f)(int)); //+
int mx_binary_search(char **arr, int size, const char *s, int *count); //+  
int mx_bubble_sort(char **arr, int size); //+
int mx_quicksort(char **arr, int left, int right); //+

int mx_strlen(const char *s); //+ proveril
void mx_swap_char(char *s1, char *s2); //+ proveril
void mx_str_reverse(char *s); //+ proveril
void mx_strdel(char **str); //+ proveril
void mx_del_strarr(char ***arr); //+ proveril
int mx_get_char_index(const char *str, char c); //+ proveril
char *mx_strdup(const char *s1); //+ proveril 
char *mx_strndup(const char *s1, size_t n);//+ proveril
char *mx_strcpy(char *dst, const char *src);//+ proveril
char *mx_strncpy(char *dst, const char *src, int len);//+ proveril
int mx_strcmp(const char *s1, const char *s2);//+ proveril
char *mx_strcat(char *restrict s1, const char *restrict s2);//+proveril
char *mx_strstr(const char *haystack, const char *needle);//+ proveril
int mx_get_substr_index(const char *str, const char *sub);//+ proveril
int mx_count_substr(const char *str, const char *sub);//+ proveril
int mx_count_words(const char *str, char c);//+ proveril
char *mx_strnew(const int size);//+ proveril
char *mx_strtrim(const char *str);//+ proveril
char *mx_del_extra_spaces(const char *str);//+ proveril
char **mx_strsplit(const char *s, char c);//+ proveril
char *mx_strjoin(const char *s1, const char *s2);//+ proveril
char *mx_file_to_str(const char *file);//+proveril
char *mx_replace_substr(const char *str, const char *sub, const char *replace);//+ proveril
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);//+ proveril

void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);

typedef struct s_list {
 void *data;
 struct s_list *next;
} t_list;
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_front(t_list **head);
void mx_pop_back(t_list **list);
int mx_list_size(t_list *list);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
