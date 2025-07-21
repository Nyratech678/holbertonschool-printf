#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _printf(const char *format, ...);
int handle_format(const char *format, int *i, va_list args);

#endif