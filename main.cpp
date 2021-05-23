#include <iostream>
using namespace std;

string replace(string s, char c1, char c2)
{
    int l = s.length();
    int j = 0;
    for (int i = 0; i < l; i++) {
      
        if (s[i] == c1){
            s[i] = c2;
            j++;
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
  cout << "a palavra é: " << replace(s, c1, c2) << endl;
return 0;
}