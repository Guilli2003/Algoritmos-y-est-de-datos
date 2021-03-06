#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void revertir(int vec5[], int dim){
    int aux;
    for ( int i = 0 ; i < dim/2; i++){
        aux = vec5[i];
        vec5[i] = vec5[dim-1-i];
        vec5[dim-1-i] = aux;
    }
}

void transpuesta(int m[][5], int dfil){
    const int dcol = 5; // solo por prolijidad
    int aux;
    for (int i = 0; i < dfil; ++i) {
                for (int j = i; j < dcol; ++j){
                    aux = m [i] [j];
                    m [i] [j] = m [j] [i];
                    m [j] [i] = aux;
        }
    }
}   



int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    

    cout<<"Vector de 5 elementos:"<<endl;
    mostrarvec (vec5, dim5);
    revertir (vec5, dim5);
    cout<<"Su reverso:"<<endl;
    mostrarvec (vec5, dim5);
    cout<<"----------------------------------"<<endl;
    cout<<"Vector de 10 elementos:"<<endl;
    mostrarvec (vec10, dim10);
    revertir (vec10, dim10);
    cout<<"Su reverso:"<<endl;
    mostrarvec (vec10, dim10);
    cout<<"----------------------------------"<<endl;
    cout<<"Matriz:"<<endl;
    mostrarmat (matriz, dim5);
    transpuesta(matriz, dim5);
    cout<<"Su Transpuesta:"<<endl;
    mostrarmat (matriz, dim5);
    return 0;
}