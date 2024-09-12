#include "libmx.h"

void mx_str_reverse(char *str) {
    if (str == NULL) {
        return;
    }

    int len = mx_strlen(str);
    int start = 0;
    int end = len - 1;

    for (int i = 0; i < len; i++) {
        mx_printchar(str[i]);
    }

    while (start < end) {
        mx_swap_char(&str[start], &str[end]);
        start++;
        end--;
    }

    for (int i = 0; i < len; i++) {
        mx_printchar(str[i]);
    }
}
