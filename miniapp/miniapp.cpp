#include <stdio.h>
#define LIBARCHIVE_STATIC
#include <libarchive/archive.h>
#include <libarchive/archive_entry.h>

#define HAVE_ZLIB 1
#define ZLIB_COMPAT 1
#define HAVE_BZIP2 1
#define HAVE_LZMA 1
#define LZMA_API_STATIC 1
#define HAVE_ZSTD 1
#define HAVE_PKCRYPT 1
#define HAVE_WZAES 1
#include <mz.h>
#include <mz_zip.h>

#include <unrar/rar.hpp>
#include <unrar/dll.hpp>

int main()
{
    //libarchive
    printf("Libarchive version details:\n");
    printf("%s\n", archive_version_details());

    struct archive* arc;
    arc = archive_write_new();
    archive_write_close(arc);
    archive_write_free(arc);
    return 0;
}
