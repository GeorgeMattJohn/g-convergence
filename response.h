/******************************************************************************
 * Authors: Tolu Alabi
 *          Zach Butler
 *          Martin Dluhos
 *
 * Created: March 4, 2012
 * Revised: March 4, 2012
 * Description: This file contains functions which format the verification
 * response and functions which send the response back to the client.
 ******************************************************************************/
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>
#include <stdlib.h>
#include <stdio.h>

/* Obtains a response for a POST request
 */
int 
retrieve_post_response (void *coninfo_cls, enum MHD_ValueKind kind, 
                        const char *key, const char *filename, 
                        const char *content_type, const char *transfer_encoding,
                        const char *data, uint64_t off, size_t size);



/* Obtains a response for a GET request
 */
int
retrieve_get_response (void *coninfo_cls, char *url);



/* Sends the processed response back to the client
 */
int
send_response (struct MHD_Connection *connection, const char *page,
               int status_code);
