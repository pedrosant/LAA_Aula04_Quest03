#include<iostream>


using namespace::std;

void bubbleSort(int v[10], int n);
void insertionSort(int v[10], int n);
int encontrar_N_esimo(int v[10], int n, int posicao);
int encontrarLog_n(int v[10], int n, int posicao);
void tostring(int v[10], int n);

int main() {
	int n;
	int v [10]= {22,99,32,88,34,33,11,97,55,66};
// Item A complexidade n2 usando bubbleSort
	bubbleSort(v, 10);
	cout << "Digite o n-esimo elemnto que deseja" <<::endl;
	cin >> n;
	int result = encontrar_N_esimo(v, 10, n);
	system("cls");

	cout << "*******************VETOR ORDENADO*********************" << ::endl;
	tostring(v, 10); 
	cout << "\n";
	cout << "O n-esimo elemento do vetor: "<< result << ::endl;
	
// Item b Complexidade n log n

	return 0;
}


void bubbleSort(int v[10], int n) {
	for (int i = 0; i - 1 < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

void insertionSort(int v[10], int n) {
	int chave, j;
	for (int i = 0; i < n; i++) {
		chave = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > chave) {
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = chave;
	}
}

int encontrar_N_esimo(int v[10], int n, int posicao) {
	int result;
	result = v[posicao];
	return result;
}

int encontrarLog_n(int v[10], int n, int posicao) {
	int result;
	for (int i = 0; i < n; i++) {
		if (i == posicao) {
			result = v[posicao];
		}
	}
	return result;
}

void tostring(int v[10], int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\t";
	}
}