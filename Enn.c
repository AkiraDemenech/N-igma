#include<stdio.h>
#include<math.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<ctype.h>
void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int cod (int p, int c) {
	int i, n, d, l;
	for(i=0; i<=p; i++) {
		if(i%4==0) {
			l = c;
			do {
				c = sqrt(c+3) - cbrt(c+3) + sqrt(c) - cbrt(c);
				for(d=1; d<=c; d=d*10) { /* VOID */ } d=1000000000/d;
				c = (sqrt(c+3) - cbrt(c+3) + sqrt(c) - cbrt(c))*d;
				d = 1; if(c==l) { c=c/(i+p); }
			} while(c==l);
		}
		n = (c/d)%100;
		d = d*100;
	}
	return (n);
}
int main () {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int c, k, t, t1, t2, s, p;
	do {
		do {
			system("cls");
			SetConsoleTextAttribute (hConsole, 14);
			printf("\n    KEY (SEED): ");
			SetConsoleTextAttribute (hConsole, 15);
			scanf("%d",&k);
		} while(k<0);
		gotoxy(0,0);
		SetConsoleTextAttribute (hConsole, 14);
		printf("\n    KEY (SEED): ");
		SetConsoleTextAttribute (hConsole, 15);
		printf("%d",k);
		SetConsoleTextAttribute (hConsole, 12);
		printf("\n    PRESS ENTER TO FINISH CODING \n    PRESS BACKSPACE TO BACKWARD DELETING");
		sleep(1);
		SetConsoleTextAttribute (hConsole, 14);
		printf("\n\n TXT ");
		SetConsoleTextAttribute (hConsole, 15);
		printf("\n COD \n DEC ");
		for(c=0, p=0; p%3==0; c++) {
			if(c>=111) {
				p+=3; c=0;
				gotoxy(0,5+p);
				SetConsoleTextAttribute (hConsole, 14);
				printf(" TXT ");
				gotoxy(0,6+p);
				SetConsoleTextAttribute (hConsole, 15);
				printf(" COD \n DEC ");
			}
			gotoxy(5+c,5+p);
			t = getch();
			if(t==8 && (c>0 || p>0)) {
				gotoxy(4+c,5+p);
				printf(" ");
				gotoxy(4+c,6+p);
				printf(" ");
				gotoxy(4+c,7+p);
				printf(" ");
				if(c>0) {
					c-=2;
				} else {
					if(p>0) {
						c=110; p-=3;
						gotoxy(5+c,5+p);
						printf(" ");
						gotoxy(5+c,6+p);
						printf(" ");
						gotoxy(5+c,7+p);
						printf(" ");
						c--;
					}
				}
			} else {
				if(t>31 && t<127) {
					printf("\a");
					SetConsoleTextAttribute (hConsole, 10);
					printf("%c",t);
					t1 = t+cod(c*((p/3)+1),k);
					while(t1>126) { t1-=95; }
					t2 = t-cod(c*((p/3)+1),k);
					while(t2<32) { t2+=95; }
					SetConsoleTextAttribute (hConsole, 11);
					gotoxy(5+c,6+p);
					printf("%c",t1);
					gotoxy(5+c,7+p);
					printf("%c",t2);
				} else {
					if(t==13) {
						p++;
					} else {
						c--;
					}
				}
			}
		}
		sleep(1);
		SetConsoleTextAttribute (hConsole, 12);
		printf("\n\n\n        1/0? ");
		do { c = getch()-48; } while(c!=1 && c!=0);
	} while(c>0);
	return 0;
}
