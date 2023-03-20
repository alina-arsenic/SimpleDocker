FROM nginx

COPY ./server/server.c /weaveryu/server.c

RUN apt-get update && \
apt-get install -y gcc libfcgi-dev spawn-fcgi && \
rm -rf /var/lib/apt/lists

CMD gcc /weaveryu/server.c -lfcgi -o /weaveryu/serv && \
spawn-fcgi -p 8080 /weaveryu/serv && \
nginx -g "daemon off;"

HEALTHCHECK --interval=5s --timeout=10s --retries=3 CMD curl -sS 127.0.0.1 || exit 1
