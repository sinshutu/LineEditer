APP_NAME=LineEditer

${APP_NAME} : main.c
	gcc -o $@ $+

run: ${APP_NAME}
	./${APP_NAME} test.txt

clean:
	rm -f ${APP_NAME} *.o test.txt
