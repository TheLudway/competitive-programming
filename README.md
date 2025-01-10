Me cansé de no saber programar, voy a aprender C++ como un enfermito.

--- 

# Compilación

Estoy compilando todo usando `g++` con el siguiente formato: 

``` sh
g++ nombre_programa.cpp -g -o main
```

Cuando me toca compilar muchos archivos, lo que hago es:

``` sh
g++ ./* -g -o main
```

Para esto, toca asegurarse de que todo sean archivos, nada de binarios ni directorios.

Esto lo hago para luego poder debuggear con `gdb` de manera más cómoda (para eso sirve la bandera `-g`). Entonces, para debuggear lo único que hago es:

``` sh
gdb main
```

Y yap, las demás opciones de debuggear se pueden leer en cualquier tabla de comandos de `gdb`.

También, a veces me da por ver cómo es el código en Assembly usando el compilador de GNU con la siguiente opción

``` sh
g++ -S main.cpp
```
