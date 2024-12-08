#include <iostream>

const int Pen {10};
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };

int main(){
    int tool { Circle };

    if(tool == Pen){
        std::cout << "Activar herramienta Pen" << std::endl;
    }
    else if (tool == Marker) {
        std::cout << "Activar herramienta Marker" << std::endl;
    }
    else if (tool == Eraser){
        std::cout << "Activar herramienta Eraser" << std::endl;
    }
    else if (tool == Rectangle){
        std::cout << "Activar herramienta Rectangle" << std::endl;
    }
    else if (tool == Circle){
        std::cout << "Activar herramienta Circle" << std::endl;
    }
    else if (tool == Ellipse){
        std::cout << "Activar herramienta Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}
