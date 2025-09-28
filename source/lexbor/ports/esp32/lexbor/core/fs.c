/*
 * ESP32 port for Lexbor filesystem functions
 * Minimal stub implementations for embedded systems
 */

#include "lexbor/core/fs.h"

lxb_status_t
lexbor_fs_dir_read(const lxb_char_t *dirpath, lexbor_fs_dir_opt_t opt,
                   lexbor_fs_dir_file_f callback, void *ctx)
{
    /* ESP32 doesn't have directory access, return error */
    return LXB_STATUS_ERROR;
}

lxb_status_t
lexbor_fs_file_read(const lxb_char_t *filepath, lxb_char_t **content,
                    size_t *content_len)
{
    /* ESP32 doesn't have file access, return error */
    return LXB_STATUS_ERROR;
}

lxb_status_t
lexbor_fs_file_write(const lxb_char_t *filepath, const lxb_char_t *content,
                     size_t content_len)
{
    /* ESP32 doesn't have file access, return error */
    return LXB_STATUS_ERROR;
}