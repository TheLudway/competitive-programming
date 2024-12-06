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
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << "--------------- std::dec, std::hex, std::oct ---------------" << std::endl;

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "Formateo en base normal : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int en diferentes bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int en diferentes bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var en diferentes bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "--------------- uppercase & nouppercase ---------------" << std::endl;

    pos_int = 717171;


    std::cout << "pos_int (nouppercase : por defecto) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "--------------- Formateo de flotantes ---------------" << std::endl;

    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "valores double (defacult : usar notacion cientifica cuando sea necesario) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "valores double (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "valores double (cientifica) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "valores double (volver a los predeterminados) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    a = 3.1415926535897932384626433832795;

    std::cout << "setprecision() : numero de digitos para ser impresos de un numero flotante, por defecto 6" << std::endl;
    std::cout << "a (default (6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    std::cout << std::endl;
    std::cout << "-----showpoint y noshowpoint : muestra los ceros si son necesarios-----" << std::endl;
    std::cout << std::setprecision(6);
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {55};

    std::cout << std::endl;
    std::cout << "noshowpoint (defecto) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << std::dec << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;




    return 0;
}
