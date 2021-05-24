 //o meu github ficou só com essa quantidade de "saves" pois demoraria muito eu salvar com comentário as mudanças uma de cada vez (foram muitas mudanças) então eu simplesmente fiz o meu código abrir um novo replit e coloquei o passo a passo da ordem que eu fiz o meu código



#include <iostream>
using namespace std;

string replace(string s, char c1, char c2)
{
  string *ponteiro;
  ponteiro = &s;
  string n;
  string *ponteiron;
  ponteiron = &n;
    int l = s.length();
    int j = 0;
    for (int i = 0; i < l; i++) {
      
        if (s[i] == c1){
            s[i] = c2;
            j++;
            n = s;
        }
    }
    cout << "houve " << j << " letra(s) mudada(s)" << endl;
    return s;
}

int main() {
  string s;
  char c1;
  char c2;

  cout << "digite a palavra: " << endl;
  cin >> s;

  cout << "digite a letra original para ser trocada: " << endl;
  cin >> c1;

  cout << " digite a letra substituta: " << endl;
  cin >> c2;


  cout << "a palavra era: " << s << endl;
  cout << replace(s, c1, c2) << " é a nova palavra" << endl;
return 0;
}