# tocadosaci
Toca do Saci Obi 2016
Toca do Saci
Depois de muito procurar, Emília finalmente conseguiu encontrar a toca do Saci. A toca tem formato retangular, e é formada por um quadriculado de salas quadradas de mesmo tamanho, com N salas em uma dimensão e M salas na outra dimensão. A figura abaixo mostra um exemplo de mapa da toca, com cinco salas na dimensão horizontal e quatro salas na dimensão vertical. Há uma única entrada, pela sala marcada com o número 3 no mapa. As salas da toca são muito parecidas, para confundir quem tenta encontrar o Saci, e têm portas que comunicam-se apenas com salas vizinhas nas direções horizontal e vertical do mapa. Emília entrou na toca seguindo o Saci com o objetivo de pegar o seu chapéu, e só vai devolvê-lo se o Saci prometer não fazer mais diabrites no Sítio. Muito esperta, ela foi deixando estrelinhas coloridas pelas salas que passou (marcadas com o número 1 no mapa), para saber o caminho de volta. Ela pegou o chapéu do Saci enquanto ele dormia, e começou o caminho de volta. Está muito escuro e ela precisa acender um fósforo em cada sala, para ver as estrelinhas que marcam o caminho. No meio do caminho, ela percebeu que seus fósforos estavam acabando e agora está com medo de não ter fósforos suficientes. Ela está na sala marcada com o número 2 no mapa. Você pode ajudá-la? Dado o mapa da toca, como no exemplo acima, escreva um programa para saber por quantas salas Emília deve passar até encontrar a saída.

Entrada
A primeira linha da entrada contém dois inteiros N e M que indicam respectivamente os números de salas nas duas dimensões da toca. Cada uma das N linhas seguintes contém M números inteiros entre 0 e 3. O valor 0 indica uma sala sem estrelinhas; o valor 1 indica uma sala com estrelinhas deixadas por Emília; o valor 2 indica uma sala com estrelinhas que é a sala onde Emília está; finalmente, o valor 3 indica uma sala com estrelinhas que é a saída. Considere que, durante o trajeto da entrada até a sala marcada com o valor 2, Emília não passou mais do que uma vez por uma mesma sala, e não existe ambiguidade no caminho de volta (em outras palavras, a cada ponto do trajeto de volta, existe apenas uma sala marcada para Emília voltar).
Saída
Seu programa deve imprimir uma única linha, contendo o número de salas que Emília deve passar, seguindo as estrelinhas, até chegar à saída da toca.
Restrições
A entrada obedece às seguintes restrições:
1 ≤ N ≤ 1000
1 ≤ M ≤ 1000
cada sala tem o valor 0, 1, 2 ou 3.
apenas uma sala tem o valor 2.
apenas uma sala tem o valor 3.
Informações sobre a pontuação
Em um conjunto de casos de teste equivalente a 20 pontos, Emília está em uma sala que só possui uma sala vizinha com estrelinhas (como no exemplo 1).

Exemplos
Entrada
4 5
0 1 1 1 0
0 2 0 1 1
0 0 0 0 1
3 1 1 1 1
Saída
12
	
 

Entrada
4 5
0 0 0 1 0
0 0 0 1 1
0 0 0 0 2
0 3 1 1 1
Saída
5
	
 

Entrada
4 5
0 1 2 1 0
0 1 0 1 1
0 0 0 0 1
3 1 1 1 1
Saída
10
	
