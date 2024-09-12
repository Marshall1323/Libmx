#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (fd < 0 || !lineptr || buf_size == 0) {
        return -2;
    }

    if (*lineptr == NULL) {
        *lineptr = malloc(buf_size);
        if (*lineptr == NULL) {
            return -2;
        }
    }

    size_t total_read = 0;
    ssize_t bytes_read;
    char buffer[1];

    while (total_read < buf_size - 1) {
        bytes_read = read(fd, buffer, 1);

        if (bytes_read == -1) {
            free(*lineptr);
            return -2;
        } else if (bytes_read == 0) {
            break; 
        }

        if (buffer[0] == delim) {
            break; 
        }

        (*lineptr)[total_read++] = buffer[0];
    }

    (*lineptr)[total_read] = '\0'; 

    if (total_read == 0 && bytes_read == 0) {
        return -1;
    }

    return total_read;
}
