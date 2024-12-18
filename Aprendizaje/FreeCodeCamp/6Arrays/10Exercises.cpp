#include <iostream>
#include <algorithm>
#include <limits>


int main(){

    // std::cout << "Array Basics" << std::endl;
    // int array1[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (size_t i {0} ; i < 10 ; i++){
    //     std::cout << array1[i] << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "Sum of Array Elements" << std::endl;
    // int array2[5] {};
    // std::cout << "Escribe 5 numeros separados por espacios" << std::endl;

    // for (size_t i {0} ; i < 5 ; i++){
    //     std::cin >> array2[i];
    // }

    // int sum {};
    // for (size_t i {0} ; i < 5 ; i ++){
    //     sum += array2[i];
    // }
    // std::cout << "La suma de los elementos de la lista es : " << sum << std::endl;

    // std::cout << "Larges and Smallest Element" << std::endl;
    // int array3[8] {};
    // double small = std::numeric_limits<double>::infinity();
    // double max = -std::numeric_limits<double>::infinity();

    // for (size_t i {0} ; i < 8 ; i++){
    //     std::cin >> array3[i];
    // }

    // for (int i : array3){
    //     if (i < small){
    //         small = i;
    //     }
    //     if (i > max){
    //         max = i;
    //     }
    // }
    // std::cout << "El max es : " << max << "\n";
    // std::cout << "El min es : " << small << "\n";

    // std::cout << "Reverse Array" << std::endl;
    // int array4[6] {};
    // int array4_rev[6] {};

    // for (size_t i {} ; i < 6 ; i++){
    //     std::cin >> array4[i];
    // }

    // for (int i {5} ; i >= 0 ;i--){
    //     int j = 5-i;
    //     array4_rev[j] = array4[i];
    // }

    // for (size_t i {0} ; i < 6 ; i++){
    //     std::cout << array4_rev[i] << ' ';
    // }
    // std::cout << std::endl;

    // std::cout << "Count even and odd\n";
    // int array5 [10] {};
    // int even {0};
    // int odd {0};


    // for (int i {0}; i < 10; i++){
    //     std::cin >> array5[i];
    // }

    // for (auto i : array5){
    //     if (i % 2 == 0){
    //         even += 1;
    //     }else{
    //         odd += 1;
    //     }
    // }

    // std::cout << "Even: " << even << "\nOdd: " << odd << "\n";

    // std::cout << "Search for an element\n";

    // int array6[5] {};
    // int obj {};
    // for (int i {0}; i < 5 ; i++){
    //     std::cin >> array6[i];
    // }

    // std::cout << "¿Por cuál número desea buscar?" << std::endl;
    // std::cin >> obj;

    // int i {std::size(array6)/2};
    // if (array6[i] == obj){
    //     std::cout << "Encontrado en el indice " << i << std::endl;
    // }else{
    // while (true){
    //     if (obj > array6[4] || obj < array6[0]){
    //         std::cout << "Elemento no encontrado\n";
    //         break;
    //     }else if (array6[i] > obj){
    //         i = i/2;
    //     }else if (array6[i] < obj){
    //         i = (std::size(array6) + i) /2 ;
    //     }else{
    //         std::cout << "Encontrado en el indice " << i << std::endl;
    //         break;
    //     }
    // }

    // }

    // std::cout << "Array Sorting\n";
    // int array7[5] {};
    // for (int i {0}; i < 5; i++){
    //     std::cin >> array7[i];
    // }
    // int n {std::size(array7)};

    // for (int i {0}; i < n-1 ; i++){
    //     for (int j {0}; j < n-i-1; j++){
    //         if (array7[j] > array7[j+1]){
    //             std::swap(array7[j], array7[j+1]);
    //         }
    //     }
    // }

    // for (auto i : array7){
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "Array Rotation" << std::endl;
    // int array8[5] {};
    // for (size_t i {0}; i < std::size(array8); i ++){
    //     std::cin >> array8[i];
    // }

    // for (size_t i {1}; i < std::size(array8); i++){
    //     std::swap(array8[i], array8[i-1]);
    // }
    // for (auto i : array8){
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;


    // std::cout << "Rotate an Array" << std::endl;
    // int array9 [5] {};
    // for (size_t i {0}; i < std::size(array9); i++){
    //     std::cin >> array9[i];
    // }
    // int temp {array9[4]};

    // for (int i {std::size(array9)}; i > 0; i--){
    //     array9[i] = array9[i-1];
    // }
    // array9[0] = temp;
    // for (int i : array9){
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "Count Frequency of Each element" << std::endl;
    // int array10[6] {};
    // for (size_t i {0}; i < std::size(array10); i++){
    //     std::cin >> array10[i];
    // }

    // for (size_t i {0}; i < std::size(array10); i ++){
    //     int count {};
    //     for (size_t j {i+1}; j < std::size(array10); j++){
    //         if (array10[i] == array10[j]){
    //             count += 1;
    //         }
    //     }
    //     std::cout << "Elemento: " << array10[i] << " se repite " << count << "Veces\n";
    // }

    return 0;
}
