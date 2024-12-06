#include <iostream>
#include <iomanip>

int main(){

    // std::endl : Colca un nuevo caracter de linea en la salida del stream
    // Es equivalente a colocar '\n' en la salida del stream

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "----------" << std::endl;

    std::cout << "Hola" << std::endl;
    std::cout << "Mundo" << std::endl;

    std::cout << std::endl;

    std::cout << "Hola\n";
    std::cout << "Mundo\n";

    //============================================================
    std::cout << std::endl;

    // std::flush : limpia la salida del buffer a la destinacion final.
    std::cout << "Este es un mensaje lindo..." << std::endl << std::flush;
    // Despues de este std::flush, nos aseguramos que en esta linea, el mensaje ha sido
    // enviado a la terminal. Esto puede ser importante en algunas aplicaciones

    //============================================================
    std::cout << std::endl;

    // std::setw() : Ajusta el campo con los items para ser impresos.
    // El manipulador setw() solo afecta al valo siguiente para ser impreso.

    std::cout << "Tabla no formateada : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Tabla formateada : " << std::endl;

    std::cout << std::setw(10) << "Apellido" << std::setw(10) << "Nombre" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatear tablas con variables : " << std::endl;

    int col_width {14};

    std::cout << std::setw(col_width) << "Apellido" << std::setw(col_width) << "Nombre" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

    //============================================================
    std::cout << std::endl;

    // Justificar: los valores pueden ser justificados en sus campos. Existen tres manipuladores para ajustar:
    // left, right, internal.

    // Justiicado a la derecha
    std::cout << std::endl;
    std::cout << "Tabla justificada a la derecha (defecto) : " << std::endl;

    col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Apellido" << std::setw(col_width) << "Nombre" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout << std::endl;
    std::cout << "Tabla justificada a la izquierda : " << std::endl;

    std::cout << std::left;
    std::cout << std::setw(col_width) << "Apellido" << std::setw(col_width) << "Nombre" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout << std::endl;
    std::cout << "Justificado interno : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::endl;
    std::cout << "--------------- boolalpha ---------------" << std::endl;

    bool condition {true};
    bool other_condition {false};

    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "contigion : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << "--------------- showpos ---------------" << std::endl;

    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;




    return 0;
}
