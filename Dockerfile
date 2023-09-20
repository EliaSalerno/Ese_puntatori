FROM alpine
WORKDIR /app
RUN apk update && apk add git && apk add gcc && apk add nano && apk add musl-dev
