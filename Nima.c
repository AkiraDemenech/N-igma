#include<stdio.h>
#include<math.h>

char cod;
int k, z, a, b, c, d, e;
int ram (int k) { a =  sqrt(k+3) - cbrt(k+3) + sqrt(k) - cbrt(k); b = a;
	for(d=1; d<=100000000 && a==b; d = d*10) { if(a<d) { d = 100000000/d; a = (sqrt(k+3) - cbrt(k+3) + sqrt(k) - cbrt(k))*d; } }
	b = 1; return (a, b, d);
}
int main () { do {
	do { printf("\n Codigo de Encriptacao: "); scanf("%d",&k); } while(k<1);
	do { printf("\n Numero de Caracteres: "); scanf("%d",&z); } while(z<1);
	int w[z], x[z], y[z]; z++;
	char i[z], h[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; z--;
	for (c=1; c<=z; c++) { if(c%4==1) { ram(k); k = a%d; }
		x[c] = ((a%(b*100) - a%b)/b)%36;
		if(x[c] == 0 || (c>3 && (x[c] == x[c-1] || x[c] == x[c-2] || x[c] == x[c-3]))) { x[c] = (a + b)%36; }
		b = b*100; }
	printf("\n"); for(c=1; c<=z; c++) { printf(" %d - ",c); scanf(" %c",&i[c]); }
	for(c=1; c<=z; c++) { printf("\n %d - %c ",c,i[c]);
	if(i[c]=='0') { y[c] = 1; } if(i[c]=='1') { y[c] = 2; } if(i[c]=='2') { y[c] = 3; } if(i[c]=='3') { y[c] = 4; } if(i[c]=='4') { y[c] = 5; }
	if(i[c]=='5') { y[c] = 6; } if(i[c]=='6') { y[c] = 7; } if(i[c]=='7') { y[c] = 8; } if(i[c]=='8') { y[c] = 9; } if(i[c]=='9') { y[c] = 10; }
	if(i[c]=='A' || i[c]=='a') { y[c] = 11; } if(i[c]=='B' || i[c]=='b') { y[c] = 12; } if(i[c]=='C' || i[c]=='c') { y[c] = 13; }
	if(i[c]=='D' || i[c]=='d') { y[c] = 14; } if(i[c]=='E' || i[c]=='e') { y[c] = 15; } if(i[c]=='F' || i[c]=='f') { y[c] = 16; } 
	if(i[c]=='G' || i[c]=='g') { y[c] = 17; } if(i[c]=='H' || i[c]=='h') { y[c] = 18; } if(i[c]=='I' || i[c]=='i') { y[c] = 19; } 
	if(i[c]=='J' || i[c]=='j') { y[c] = 20; } if(i[c]=='K' || i[c]=='k') { y[c] = 21; } if(i[c]=='L' || i[c]=='l') { y[c] = 22; } 
	if(i[c]=='M' || i[c]=='m') { y[c] = 23; } if(i[c]=='N' || i[c]=='n') { y[c] = 24; } if(i[c]=='O' || i[c]=='o') { y[c] = 25; } 
	if(i[c]=='P' || i[c]=='p') { y[c] = 26; } if(i[c]=='Q' || i[c]=='q') { y[c] = 27; } if(i[c]=='R' || i[c]=='r') { y[c] = 28; } 
	if(i[c]=='S' || i[c]=='s') { y[c] = 29; } if(i[c]=='T' || i[c]=='t') { y[c] = 30; } if(i[c]=='U' || i[c]=='u') { y[c] = 31; } 
	if(i[c]=='V' || i[c]=='v') { y[c] = 32; } if(i[c]=='W' || i[c]=='w') { y[c] = 33; } if(i[c]=='X' || i[c]=='x') { y[c] = 34; } 
	if(i[c]=='Y' || i[c]=='y') { y[c] = 35; } if(i[c]=='Z' || i[c]=='z') { y[c] = 36; } printf("(%c %d)",h[y[c]-1],y[c]); }
	do { printf("\n\n"); do { printf(" 0 sair / 1 - CRIPTOGRAFAR / 2 - DECODIFICAR / 3 - EXIBIR SEQUENCIA \n K"); scanf("%d",&k); } while(k<0 || k>3);
	if(k==1) { for(c=1; c<=z; c++) { w[c] = y[c] + x[c]; if(w[c] < 1) { w[c] = -w[c]; } if(w[c] > 36) { w[c] = w[c] - 36; } } }
	if(k==2) { for(c=1; c<=z; c++) { w[c] = y[c] - x[c]; if(w[c] < 1) { w[c] = w[c] + 36; } } }
	if(k==3) { for(c=1; c<=z; c++) { printf(" %d",x[c]); } }
	if(k==1 || k==2) { printf("\n\n ---> "); for(c=1; c<=z; c++) { printf("%c",i[c]); } printf("\n ---> "); for(c=1; c<=z; c++) { printf("%c",h[y[c]-1]); }
		printf("\n"); for(c=1; c<=z; c++) { b = y[c] - 1; printf("\n %d - %c (%d)",c,h[b],y[c]); }
		printf("\n"); for(c=1; c<=z; c++) { b = w[c] - 1; a = y[c] - 1; printf("\n %d - (%d) %c | %c (%d) - %d",c,w[c],h[b],h[a],y[c],x[c]); }
		printf("\n\n ---> "); for(c=1; c<=z; c++) { b = y[c] - 1; printf("%c",h[b]); }
		printf("\n ---> "); for(c=1; c<=z; c++) { b = w[c] - 1; printf("%c",h[b]); }
		printf("\n\n ---> "); for(c=1; c<=z; c++) { b = y[c] - 1; printf(" %c",h[b]); }
		printf("\n\n ---> "); for(c=1; c<=z; c++) { b = w[c] - 1; printf(" %c",h[b]); } }
	} while(k>0);
	do { printf("\n Reiniciar? s1m ou na0 K"); scanf(" %c",&cod); } while(cod!='s' && cod!='S' && cod!='N' && cod!='n' && cod!='Y' && cod!='y' && cod!='1' && cod!='0');
} while(cod=='1' || cod=='s' || cod=='S' || cod=='y' || cod=='Y'); return 0; }
