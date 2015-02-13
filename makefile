#ターゲット名　   :　依存ファイル
LineEditer.exe : LineEditer.o
#$@はターゲット名　$^は依存しているファイル名
	gcc -o $@ $^
LineEditer.o : LineEditer.c
	gcc -c $^
