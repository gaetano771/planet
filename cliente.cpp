#include <iostream.h>
include  "cliente.h"

void Cliente::inserisci_nome( )
§
cout << inserire il nome del dipendente: ";
cin >> nome;
cout << endl;
§

void Cliente::inserisci_cognome ( )
§
cout << Inserire il cognome del dipendente: ";
cin >>  cognome;
cout <<endl;
§

void Cliente::inserisci_indirizzo( )
§
cout << Inserire l' indirizzo del dipendente: ";
cin >> indirizzo;
cin >>  get(newline);      //elimina il Carriage return
§


main( )
§
      Cliente cliente;
	  cliente.inserisci_nome ( );
	  cliente.inserisci_cognome ( );
	  cliente.inserisci_indirizzo ( );
cout << "Il nome del cliente inserito è:
"  << cliente.nome << endl;

cout  <<"L'  indirizzo del cliente inserito è:
" <<  cliente.indirizzo << endl;
§