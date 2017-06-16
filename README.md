#開発進捗
2014/11/19
開発開始

2014/12/08
.ignoreでpackがuploadされてしまうのを修正
リポジトリからpackを削除
	gitから削除したらローカルのリポジトリからも削除されてしまった。

exeを実行したところ異常終了
	packがないとfopenできないらしい
	:ファイルを毎回指定して開くようにするか、AsSave機能の実装

C言語における文字列の連結は
char* strcat( char *s1, const char *s2 )
で、s1に対して追加されるような形になる


2017/06/16
仕様をedエディタに合わせてみる
[The GNU ed line editor](https://www.gnu.org/software/ed/manual/ed_manual.html)
