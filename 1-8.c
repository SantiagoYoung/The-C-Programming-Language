#include<stdio.h>

main(){
	int bl, tb, nl, c;
	bl = 0;
	tb = 0;
	nl = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == ' ')
			++bl;
		if( c == '\t')
			++tb;
		}
	printf("bl:%d\ntb:%d\nnl:%d\n", bl, tb, nl);
}
