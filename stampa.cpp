/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

NOME COGNOME DATA
Edmard Guilot 03/03/2022                   */

# include <iostream>

using namespace std;

int main ()
{
  int n = 0;
  cout << "Quante volte vuoi stampare la frase? : ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
   cout << "Bada come la fuma\n" << endl; 
  }
} 
