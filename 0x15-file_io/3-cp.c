#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_buffer - copies the content of a file to another 
 * @FD_VALUE: the value of the descriptor
 * @NAME_OF_THE_FILE: the second argument passed
 * 
 * Returns: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file);
void close_file(int fd);


