APP_NAME=LineEditer

${APP_NAME} : main.c
	gcc -o $@ $+

run: ${APP_NAME}
	./${APP_NAME} README.md

clean:
	rm -f ${APP_NAME} *.o
