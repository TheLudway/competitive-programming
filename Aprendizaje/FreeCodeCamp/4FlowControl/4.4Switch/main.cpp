#include <iostream>
#include <string>

const int Pen { 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };

int main(){
    int tool { Pen };

    switch (tool){

        case Pen: {
            std::cout << "Activar herramienta Pen" << std::endl;
        }
            break;

        case Marker: {
            std::cout << "Activar herramienta Marker" << std::endl;
        }
            break;

        case Eraser: {
            std::cout << "Activar herramienta Eraser" << std::endl;
        }
            break;

        case Rectangle: {
            std::cout << "Activar herramienta Rectangle" << std::endl;
        }
            break;

        case Circle: {
            std::cout << "Activar herramienta Circle" << std::endl;
        }
            break;

        case Ellipse: {
            std::cout << "Activar herramienta Ellipse" << std::endl;
        }
            break;

        default: {
            std::cout << "No se puede emparejar ninguna herramienta" << std::endl;
        }
            break;
    }


    /* No se puede utilizar con Strings
     std::string name { "John"};
    switch (name) {
        case "John": {
            std::cout << "Nombre es John" << std::endl;
        }
            break;
    }

      */



    return 0;
}
