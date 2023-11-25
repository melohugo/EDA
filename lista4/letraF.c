# include <stdio.h>
# include <stdlib.h>

typedef struct Dado dado;

struct Dado
{
    int qtd;
    char letra;
    int posicao;
};

void merge(dado *vetor, int l, int m, int r)
{
    int tamanho = (r - l) + 1;
    dado *aux = malloc(tamanho * sizeof(dado));

    if(aux)
    {
        int i = 0;
        int indiceEsquerda = l; // inicio do sib-vetor a esquerda
        int indiceDireita = m + 1; // inicio do sub-vetor a direita

        while( indiceEsquerda <= m && indiceDireita <= r) // se o elemento da esquerda for menor que o da direita entao coloca o da esquerda
        {
            if(vetor[indiceEsquerda].qtd < vetor[indiceDireita].qtd)
                aux[i++] = vetor[indiceEsquerda++];
            else
                aux[i++] = vetor[indiceDireita++];
        }

         // se ja tiver colocado todos os elementos da esquerda, tem que colocar os elementos que sobraram na direita
        if(indiceEsquerda == m + 1) 
            while(indiceDireita <= r) aux[i++] = vetor[indiceDireita++];
            
        // se ja tiver colocado todos os elementos da direita, tem que colocar os elementos que sobraram na esquerda
        else
            while(indiceEsquerda <= m + 1) aux[i++] = vetor[indiceEsquerda++];
        
        // copia
        i = 0;
        while(i < tamanho)
        {
            vetor[l++] = aux[i++];
        }

        free(aux);
    }

    //  free(aux);
}

void mergeSort(dado *vetor, int l, int r)
{
    if(l < r)
    {
        int m = (l + r)/2;
        mergeSort(vetor, l, m);
        mergeSort(vetor,m + 1, r);
        merge(vetor, l, m, r);

    }
}

int main()
{   
    dado vetorDegustacao[1000];
    char string[1000];
    scanf("%s",string);

    int i = 1, j = 0;
    vetorDegustacao[0].letra = string[0];
    vetorDegustacao[0].qtd = 1;
    vetorDegustacao[0].posicao = 0; 

    while(string[i] != '\0')
    {
        if(string[i] != string[i - 1])
        {
            vetorDegustacao[++j].letra = string[i];
            vetorDegustacao[j].qtd = 1;
            vetorDegustacao[j].posicao = i;
        }
        else
             vetorDegustacao[j].qtd++;

        i++;
    }

    int tamanho = j++;
    mergeSort(vetorDegustacao, 0, tamanho);

    i = tamanho;
    while(i >= 0)
    {
        printf("%d",vetorDegustacao[i].qtd);
        printf(" %c",vetorDegustacao[i].letra);
        printf(" %d",vetorDegustacao[i--].posicao);
        printf("\n");
    }
    return 0;
}