#include <stdio.h>
#define SalasMaximo 1000                                          // define o tamanho maximo de salas na matriz em fun��o da plataforma de teste

int N,M,Ni,Mi;
int DirecaoX[4]={0,1,0,-1}, DirecaoY[4]={1,0,-1,0};               // considere quatro Dire��es possiveis a partir de qualquer sala
int partidaN, partidaM, FinalN, FinalM;                           // ponto de partida
int Salas[SalasMaximo][SalasMaximo];                              // cria um ambiente com tamanho maximo de salas
int Distancia[SalasMaximo][SalasMaximo];                          // cria uma tabela com as distancias encontradas

//int x0,y0; 
int k,L;                        

void Search(int x, int y){                                        // inicio da fun�ao recursiva e ponto de partida para medir a distancia

	for(k=0;k<4;k++){                                             // para cada dire��o de deslocamento procure um caminho valido              <------- +
	                                                              //                                                                                   :
		int x0=x+DirecaoX[k], y0=y+DirecaoY[k];
		printf("{%i %i}\n",y0,x0);                              // vejo a casa adjacente para a qual posso ir baseado nas dire�oes possiveis         :
		if(Salas[x0][y0]>0 && Distancia[x0][y0]==1){              // se ela estiver dentro do limite da matriz e n�o foi alcan�ada pela Search         :
					                                              //                                                                                   :
			Distancia[x0][y0]=Distancia[x][y]+1; 
			//printf("{%i}\n",Distancia[x0][y0]); 
			printf("{%i %i}",y0,x0); 
			// atualizo sua dist�ncia                                                            :
			Search(x0,y0);                                        // e chamo a fun��o Search apartir dela propria e recome�a o ciclo           ------- +  
		}                                                         // ate que toda matriz tenha sido percorrida e ou se encontre o final 
	}                                                             // ou a condi��o de conteudo das salas adjacentes sejam <= 0 ou todas
}                                                                 // sejam diferentes de 1 inclusive

int main (){                                                      // inicio do programa principal main

	scanf("%i %i", &N, &M);                                       // atribui o tamanho das salas baseado na entrada do cliente
    
    for (Ni=0; Ni<N; Ni++)
    {
    	for (Mi=0; Mi<M; Mi++)                                    // percorra toda extens�o da matriz e prepare o ambiente para medi��o
        {
           scanf("%i", &Salas[Ni][Mi]);                           // preenche a matriz com os dados recebido
           
           Distancia[Ni][Mi] = 1;                                 // inicio a distancia com "1" porque qualquer distancia a partir dele come�a por um
           
           if (Salas[Ni][Mi] == 3) {                              // Se esta for a posi��o inicial salve o endere�o
              partidaN = Ni;  partidaM = Mi;                      // salve as cordenadas N e M do endere�o na variavel Partida
		   }
		   if (Salas[Ni][Mi] == 2) {                              // Se esta for a posi��o final salve o endere�o
              FinalN = Ni;  FinalM = Mi;                          // salve as cordenadas N e M do endere�o na variavel Final
		   }
        } 
    }                                                             // final da prepara��o do ambiente

    
	Search(partidaN,partidaM);                                    // e Come�o a pesquizar no ponto de partida
	printf("%d\n", Distancia[FinalN][FinalM]);                    // imprimo a dist�ncia que a Search encontrou at� a sa�da e final de programa
    //printf("{%i %i}\n",y0,x0);                              // vejo a casa adjacente para a qual posso ir baseado nas dire�oes possiveis         :
		
	return 0;                                                     // retorne ao SO
}     
