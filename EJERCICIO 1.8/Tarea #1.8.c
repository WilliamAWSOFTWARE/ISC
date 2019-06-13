#include <stdio.h>
#include <stdlib.h>

int main()
{
int http;
    printf("Digite el codigo de error:");
    scanf("%d", &http);
    switch(http){
        case 400: printf("Bad Request\n");break;
        case 401: printf("Unauthorized\n");break;
        case 402: printf("Payment Required\n");break;
        case 403: printf("Forbidden\n");break;
        case 404: printf("Not Found\n");break;
        case 405: printf("Method Not Allowed\n");break;
        case 406: printf("Not Acceptable\n");break;
        case 407: printf("Proxy Authentication Required\n");break;
        case 408: printf("Request Timeout\n");break;
        case 409: printf("Conflict\n");break;
        case 410: printf("Gone\n");break;
        case 411: printf("Length Required\n");break;
        case 412: printf("Precondition Failed\n");break;
        case 413: printf("Request Entity Too Large\n");break;
        case 414: printf("Request-URI Too Long\n");break;
        case 415: printf("Unsupported Media Type\n");break;
        case 416: printf("Requested Range Not Satisfiable\n");break;
        case 417: printf("Expectation Failed\n");break;
        case 418: printf("I'm a teapot\n");break;
        case 422: printf("Unprocessable Entity (WebDAV - RFC 4918)\n");break;
        case 423: printf("Locked (WebDAV - RFC 4918)\n");break;
        case 424: printf("Failed Dependency (WebDAV)\n");break;
        case 425: printf("Unassigned\n");break;
        case 426: printf("Upgrade Required\n");break;
        case 428: printf("Precondition Required\n");break;
        case 429: printf("Too Many Requests\n");break;
        case 431: printf("Request Header Fields Too Large\n");break;
        case 449: printf("Una extensión de Microsoft: La petición debería ser reintentada después de hacer la acción apropiada.\n");break;
        case 451: printf("Unavailable for Legal Reasons\n");break;
        default:  printf("Digite un codigo de error correcto!!");
    }
    return 0;
}
