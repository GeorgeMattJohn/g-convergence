/******************************************************************************
 * Authors: g-coders
 * Created: March 11, 2012
 * Revised: March 11, 2012
 * Description: This is a header file which will be included in all other
 * header files of the project
 ******************************************************************************/

#ifndef NOTARY_H
#define NOTARY_H

#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>
#include <stdlib.h>
#include <stdio.h>

/* This datastructure contains information about an individual connection from
 * a client. 
 */
struct connection_info_struct
{
  int connection_type;
  const char *answer_string;
  int answer_code;
};

#endif // NOTARY_H
