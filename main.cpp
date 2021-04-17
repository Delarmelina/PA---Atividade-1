#include <iostream>
#include <string.h>
using namespace std;

int main() {

  char palavra[50];
  char res;
  const char *teclado[8][4] = { {"a", "b","c", "."}, {"d", "e","f", "."}, {"g", "h","i", "."}, {"j", "k","l", "."}, {"m", "n","o", "."}, {"p", "q","r", "s"}, {"t", "u","v","."}, {"w", "x","y", "z"}};

  while(1==1){
    cout << "\nDigite a palavra que quer escrever: ";
    cin >> palavra;

    for(int L=0 ; L < strlen(palavra) ; L++){
      for(int i=0;i < 8;i++){
        for(int j=0;j < 4;j++){
          if(palavra[L] == *teclado[i][j]){
            cout << "#" << i+2 << "=" << j+1 << endl;
          }      
        }
      }
    }

    cout << "\nDeseja outra palavra? S ou N\nRes: ";
    cin >> res;
    if(res != *"S"){
      break;
    }
  }
}