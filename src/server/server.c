#include <stdlib.h>
#include "fcgi_stdio.h"

int main(void) {
    while(FCGI_Accept() >= 0) {
        printf("Status: 200 OK\r\n\r\n");
        printf("<!DOCTYPE html>\r\n\r\n");
        printf("Hello World!\r\n\r\n");
    }
    return 0;
}
