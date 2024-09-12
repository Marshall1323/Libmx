#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    const char *temp = str;
    size_t sub_len = 0;
    
    if (*sub == '\0') {
        return 0;
    }

    while (sub[sub_len] != '\0') {
        sub_len++;
    }

    while ((temp = mx_strstr(temp, sub)) != NULL) {
        count++;
        temp += sub_len; 
    }
    
    return count;
}
