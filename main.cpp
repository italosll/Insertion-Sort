#include <iostream>

int *increasing(int A[], int g);
int * decreasing(int A[] , int g);
int searchIndex(int A[], int g, int v);
void print(int A[] , int g);

using namespace std;

int main() {

    int index =0 ;
        int g = 4;
        int v = 9;
        int A[g] = {3,7,9,6};

        // Ordenar vetor em Ordem Crescente
        //increasing(A, g);

        // Ordenar vetor em Ordem Decrescente
        //decreasing(A,g);


        // Busca por valor retonando Index
        //index = searchIndex(A,g,v);

        // Imprime o Index
        //cout << " -> " << index << endl;

        // Imprime o vetor
        //print(A,g);

        return 0;
}



int * increasing(int A[] , int g ){

    for (int j = 1; j < g; ++j) {

        int chave = A[j];

        int i = j-1;

        while (i >= 0 && A[i] > chave) {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i+1] = chave;
    }


    return A;
}

int * decreasing(int A[] , int g){

    for (int j = 1; j < g; ++j) {

        int chave = A[j];

        int i = j-1;

        while (i >= 0 && A[i] < chave) {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i+1] = chave;
    }


}

int searchIndex(int A[], int g, int v){

    for (int k = 0; k < g; ++k) {
        if(A[k] == v){
            return k;
        }
    }

    return NULL;
}

void print(int A[] , int g ){

    for (int k = 0; k < g; ++k) {

        cout << " -> " << A[k] << endl;

    }


}


