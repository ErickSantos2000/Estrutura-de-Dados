
#include <iostream>

using namespace std;

int main () {

	int vetor1[5];
	int vetor2[5];
	int intersesao[5];
	int cont1 = 0;
    int cont2 = 0;
	
	int k = 0;
	
	cout << "insira 5 elementos do primeiro vetor:\n";
	for(int i = 0; i < 5; i++){
	cont1++;
	cout << cont1 << "- ";
	cin >> vetor1[i];
	}
	
	cout << "insira 5 elementos do segundo vetor:\n";
	for(int i = 0; i < 5; i++){
	cont2++;
	cout << cont2 << "- ";
	cin >> vetor2[i];
	}

	// verifica se elementos iguais
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(vetor1[i] == vetor2[j]){
            bool verifica = false;
			// evita que os elementos sejam duplicados
			for(int k = 0; k < 5; k++){
				if(vetor1[i] == intersesao[k]){
				verifica = true;	
					break;					
				    }
				}
            if(verifica == false){
            intersesao[k++] = vetor1[i]; 
    
                }
			}
		}
	}
	cout << "elementos da intersesao ";
	if(0 == k){
	cout << "nao encontrado";
	}
	
	else{
	for(int i = 0; i < k; i++){
	cout << intersesao[i] << "  ";
}
 
    }
	
}
