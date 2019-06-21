#include <stdio.h>
#include <stdlib.h>

int main (){
    int  i,k,n,m,contador=1,verificador=0,x,y;
    
    scanf("%i %i", &n, &m);
    
    int toca[100][100];
    
    for(i=0; i<n; i++){
    	for(k=0; k<m; k++){
    		scanf("%i", &toca[i][k]);
    		
    		if(toca[i][k]==3){
    			x=i;
    			y=k;
			}
    		
		}
	}
    
    while(!verificador){
    	if(x-1>=0 && toca[x-1][y]==1){
    		toca[x][y]=0;
    		contador++;   		
    		x--;
		}else if(y+1<m && toca[x][y+1]==1){
			toca[x][y]=0;
			contador++;			
			y++;
		}else if(x+1<n && toca[x+1][y]==1){
			toca[x][y]=0;
			contador++;			
			x++;
		}else if(y-1>=0 && toca[x][y-1]==1){
			toca[x][y]=0;
			y--;
			contador++;			
		}else {
             if ((x-1 >=0 && toca[x-1][y] == 2) || (y+1 < m && toca[x][y+1] == 2) || (x+1 < n && toca[x+1][y] == 2) || (y-1 >= 0 && toca[x][y-1] == 2)){
                contador++;
                verificador = 1;
        }
	 }
    	
	}

    printf("%i",contador);

	return 0;
}
