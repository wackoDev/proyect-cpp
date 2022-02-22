#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
    int option;
    bool run = true;

    do {

        cout<<"--MENU--"<<endl;
        cout<<"1) Decir hola" <<endl;
        cout<<"2) Decir nombre" <<endl;
        cout<<"3) Salir" <<endl;
        cin>>option;

        system("cls");

        switch(option){
            
            case 1: 
                cout<<"Hola"<<endl;
                system("pause");
            break;

            case 2:
                cout<<"Noe"<<endl;
                system("pause");
            break;

            case 3:
                run = false;
            break;
            

            
        };


    } while (run);
    
    cout<<"Gracias por usar este aplicativo"<<endl;

    return 0;
}