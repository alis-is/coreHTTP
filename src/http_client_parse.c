#include "private/http_client_parse.h"

HTTPStatus_t HTTPClient_InitializeParsingContext( HTTPParsingContext_t * pParsingContext,
                                                  HTTPClient_HeaderParsingCallback_t * pHeaderParsingCallback )
{
    /* Disable unused parameter warnings. */
    ( void ) pParsingContext;
    ( void ) pHeaderParsingCallback;
    /* This function is to be implenmented. */
    return HTTP_SUCCESS;
}

HTTPStatus_t HTTPClient_ParseResponse( HTTPParsingContext_t * pParsingContext,
                                       const uint8_t * pBuffer,
                                       size_t bufferLen )
{
    /* Disable unused parameter warnings. */
    ( void ) pBuffer;
    ( void ) bufferLen;

    /* This function is to be implemented. For now we return success. */
    pParsingContext->state = HTTP_PARSING_COMPLETE;
    return HTTP_SUCCESS;
}

HTTPStatus_t HTTPClient_FindHeaderInResponse( HTTPParsingContext_t * pParsingContext,
                                              const uint8_t * pBuffer,
                                              size_t bufferLen,
                                              const uint8_t * pField,
                                              size_t fieldLen,
                                              const uint8_t ** pValue,
                                              size_t * valueLen )
{
    /* Disable unused parameter warnings. */
    ( void ) pParsingContext;
    ( void ) pBuffer;
    ( void ) bufferLen;
    ( void ) pField;
    ( void ) fieldLen;
    ( void ) pValue;
    ( void ) valueLen;

    return HTTP_NOT_SUPPORTED;
}
