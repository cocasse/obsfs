#include <sys/types.h>

int mkdirp(const char *pathname, mode_t mode);
char *dirname_c(const char *path, char **basenm);
char *make_url(const char *url_prefix, const char *path);
