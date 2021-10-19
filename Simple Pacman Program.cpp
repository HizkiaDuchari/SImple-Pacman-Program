//Simple Pacman base program
#include<stdio.h>

char g[201][201]={};
int a=0,b,c;

void pac(int x,int y)
{
	if(g[x][y]=='*'){
		a++;}
		g[x][y]='#';
	if(g[x+1][y]!='#' && x+1< b)
		pac(x + 1, y);
	if(g[x-1][y]!='#' && x-1>=0)
		pac(x-1,y);
	if(g[x][y+1]!='#' && y+1<c)
		pac(x,y+1);
	if(g[x][y-1]!='#' && y-1>=0)
		pac(x,y - 1);
}

int main()
{
	int t;
	int ang1,ang2;
	
	printf("Silahkan masukkan 'P' sebagai titik awal Pacman, '#' sebagai wall, dan '*' sebagai food.\n");
	printf("Jangan lupa untuk enter setiap kali memasukkan baris/row.\n");
	printf("Contoh maze apabila height dan widthnya sama-sama 3:\tP*#\n\t\t\t\t\t\t\t**#\n\t\t\t\t\t\t\t#**\n\n");
		
	printf("Masukkan testcase (total maze yang ingin anda masukkan): ");
	scanf("%d", &t);
	
	for(int i=1;i<=t;i++){
		printf("Masukkan 2 angka (height & width maze) untuk maze ke-%d: ", i);
		scanf("%d %d",&b,&c);
		getchar();
		printf("Masukkan mazenya!\n");
		
		for(int j=0;j<b;j++){
			for(int l=0;l<c;l++){
				scanf("%c",&g[j][l]);
			}
			getchar();
		}
		for(int j=0;j<b;j++){
			for(int l=0;l<c;l++){
				if(g[j][l]=='P'){
					ang1 = j;
					ang2 = j;
				}
			}
		}
		pac(ang1,ang2);
		printf("\nMaze #%d, total food yang didapat %d",i,a);
		printf("\n\n");
		a=0;
	}
	
	return 0;
}
