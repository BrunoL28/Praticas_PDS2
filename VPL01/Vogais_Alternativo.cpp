#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    cout << "Digite o texto." << endl;
    getline(cin, texto);
    for(int i = 0; i < texto.size(); i++){
        if(texto[i] == 'a')
            countA++;
        if(texto[i] == 'e')
            countE++;
        if(texto[i] == 'i')
            countI++;
        if(texto[i] == 'o')
            countO++;
        if(texto[i] == 'u')
            countU++;
    }
    cout << "Quantidade de A: " << countA << endl;
    cout << "Quantidade de E: " << countE << endl;
    cout << "Quantidade de I: " << countI << endl;
    cout << "Quantidade de O: " << countO << endl;
    cout << "Quantidade de U: " << countU << endl;
    return 0;
}