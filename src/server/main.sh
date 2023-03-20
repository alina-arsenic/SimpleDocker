#!/bin/bash

gcc -Wall -Wextra -Werror server.c -lfcgi -o serv
spawn-fcgi -p 8080 ./serv
