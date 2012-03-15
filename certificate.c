/******************************************************************************
 * Authors: Tolu Alabi
 *          Zach Butler
 *          Martin Dluhos
 *
 * Created: February 21, 2012
 * Revised: March 1, 2012
 * Description: Handle sending a certificate request to the website and
 *              receiving its response.
 ******************************************************************************/
#include<curl/curl.h>

/* Requests a certificate from the website given by the url. Saved the
 * fingerprint of the certificate into fingerprint_from_website. Return 1 if
 * certificate was obtained. Otherwise, return 0.
 */
int 
request_certificate (char *url, char *fingerprint_from_website)
{
  /* We need to figure out how to send an HTTP request to the
   * website. There is no microhttpd function for this.
   */
  CURL *handle;

  handle = curl_easy_init();
  curl_easy_setopt(handle, CURLOPT_URL, url);
  curl_easy_setopt(handle, CURL_HTTP_VERSION, CURL_HTTP_VERSION_1_1);
}

/* Verifies that the fingerprint from the website matches the
 * fingerprint from the user. Returns 1 if fingerprints match. Otherwise,
 * returns 0.
 */
int
verify_certificate (char *fingerprint_from_client, char *fingerprint_from_website)
{
  return !strcmp(finger_from_client, fingerprint_from_website);
}
