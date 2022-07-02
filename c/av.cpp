#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
#define TAM_MAX 10		//constante definida

struct Info{
	int codigo;
	float likes, comentarios, views;
};

//vetor da struct INFO
Info videos[TAM_MAX];


void informacao_video(Info videos[]){
	
	//Video: Descobri Como Consertar o Meu Maior Problema
	videos[0].codigo = 1;
	videos[0].likes = 76.000;
	videos[0].comentarios = 2.711;
	videos[0].views = 572.285;
	
	//Video 2: Um júnior já deveria saber como reduzir a quantidade de IFs de um código (e você, sabe?)
	videos[1].codigo = 2;
	videos[1].likes = 63.000;
	videos[1].comentarios = 1.798;
	videos[1].views = 919.642;
	
	//Video 3: Reagindo a Currículos de Programadores e Inscritos do Canal (VERSÃO 2022)
	videos[2].codigo = 3;
	videos[2].likes = 2.700;
	videos[2].comentarios = 104;
	videos[2].views = 33.617;
	
	//Video 4: Rap do Mikey (Tokyo Revengers) - O INVENCÍVEL | NERD HITS
	videos[3].codigo = 4;
	videos[3].likes = 381.000;
	videos[3].comentarios = 11.792 ;
	videos[3].views = 15.693701;
	
	//Video 5: Programar em C - Função e Variável Local Estática - Aula 31
	videos[4].codigo = 5;
	videos[4].likes = 3.000;
	videos[4].comentarios = 27;
	videos[4].views = 85.872;
	
}

void lista_videos(Info videos[]){

	
	for(int i=0; i< 5; i++)
		
		printf("\nVideo: %i\tLikes: %.3f\tComentarios: %.3f\tVisualizacoes: %.3f \n", 
		videos[i].codigo, videos[i].likes, videos[i].comentarios, videos[i].views);

	
		
}

void pesquisa_videos(Info videos[]){

	int cod;
	
	printf("Para ver o video com mais like, digite 02 > ");
	scanf("%d", &cod);
	
	if(cod == 02){
		printf("Video: %i\tLikes: %.3f\tComentarios: %.3f\tVisualizações: %.3f\n",
		videos[3].codigo,videos[3].likes,videos[3].comentarios,videos[3].views);
	}else{
		printf("\nVideo não encontrado, digite o codigo novamente 02 > ");
		scanf("%d", &cod);
		if(cod == 02){
			printf("Video: %i\tLikes: %.3f\tComentarios: %.3f\tVisualizações: %.3f\n",
			videos[3].codigo,videos[3].likes,videos[3].comentarios,videos[3].views);
		} else {
			printf("Video não encontrado, o programa ira continuar sem a renderização do video.\n");
		}
	}
	
	printf("\nPara ver o video com menos comentarios, digite 03 > ");
	scanf("%i", &cod);
	if(cod == 03){
		printf("Video: %i\tLikes: %.3f\tComentarios: %.3f\tVisualizações: %.3f",
		videos[4].codigo,videos[4].likes,videos[4].comentarios,videos[4].views);
	} 
	else{
		printf("Video não encontrado, digite o codigo novamente 03 > ");
		scanf("%d", &cod);
		if(cod == 03){
			printf("Video: %3.f\tLikes: %i\tComentarios: %.3f\tVisualizações: %.3f",
			videos[4].codigo,videos[4].likes,videos[4].comentarios,videos[4].views);
		} 
		else {
			printf("Video não encontrado, o programa ira continuar sem a renderização do video.\n");
		}
	}
	
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n");
	printf("\tAlguns valores como comentarios dos videos 3 e 5, e a visualização do video 4 estão diferentes \n");
	printf("\tmotivo: no video 3 e 5 são respectivamente(104 e 27). video 4 (15.693.701)");
	printf(" de resto esta tudo correto");
	printf("\n");
	
	system("pause");
	system("cls");
	
	printf("\n");
	printf("\tPrograma de identificação de videos \n");
	printf("\n");
	
	//carrega toda a lista de videos cadastrado
	informacao_video(videos);
	
	//exibe a referida lista
	lista_videos(videos);

	//mostra o pesquisador	
	printf("\n");
	pesquisa_videos(videos);
			
	return 0;
}





