#include <iostream>
#include <string>

using namespace std;

int eh_vogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    else
        return 0;
}

int main(){
    char repetir;
    int count[26] = {0};
    bool presente[26] = {0};
    string texto;
    cin >> texto;
    for(int i = 0; i < texto.size(); i++){
        int indice = texto[i] - 'a';
        presente[indice] = true;
        count[indice]++;
    }
    for(int i = 0; i < 26; i++){
        char c = 'a' + i;
        if(presente[i] && eh_vogal(c)){
            cout << c << " " << count[i] << endl;
        }
    }
    return 0;
}

