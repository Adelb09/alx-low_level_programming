#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r_count, w_count;
char *buffer;

if (!filename)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

r_count = read(fd, buffer, letters);
if (r_count == -1)
{
free(buffer);
close(fd);
return (0);
}

w_count = write(STDOUT_FILENO, buffer, r_count);
if (w_count == -1 || r_count != w_count)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (w_count);
}
