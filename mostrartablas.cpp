#include <iostream>
using namespace std;

extern int count;
extern int opcion;
int num = opcion;

void mostrartablas() {

cout << "Tabla del " << opcion << endl;

    for (int i = -1; i < count; i++){
    num = opcion * (i + 1);
    cout << opcion << " x " << i + 1 << " = " << num << endl;
    
}

    
 
 
}

