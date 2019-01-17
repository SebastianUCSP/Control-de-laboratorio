#include <iostream>

using namespace std;

void imprimir_nums(int x){
    for(int i = 1; i < x-1; i++){
        if(i % 2 == 0)
            cout << i << ", ";
    }
    if(x % 2 == 0)
        cout << x;
    else if((x-1) % 2 == 0)
        cout << x-1;
}

void suma(int arr[], int arr2[], int lon, int idx = 0){
    if(idx == lon){
        return;
    }
    arr[idx] += arr2[idx];
    return suma(arr, arr2, lon, ++idx);
}

int longitud(char *str){
    int cont = 0;
    for(int i = 0; str[i] != '\0'; i++)
        cont ++;
    return cont;
}
/*int a = static_cast<int>(*(arr+j));
                int b = static_cast<int>(*(arr+j+1));
void invertir(char *str, int lon ,int idx = 0){
    if(idx > lon){
        return;
    }
    char *ultimo = str + lon - 1 - idx;
    char temp = str[idx];
    str[idx] = *ultimo;
    *ultimo = temp;
    return invertir(str, lon, ++idx);
}
*/
bool palindrome(char *str, int lon, int idx = 0){
    if(idx == lon)
        return true;
    char *ultimo = str + lon - 1 - idx;
    if(*ultimo == str[idx])
        return palindrome(str, lon, ++idx);
    else
        return false;
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void ordenar(char *arr, int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
                int a = static_cast<int>(*(arr+j));
                int b = static_cast<int>(*(arr+j+1));
                if(a > b){
                        swap(a, b);
                }
        }
    }

}

int main()
{
    imprimir_nums(20);

   cout << endl;

    int arr1[] = {1,2,5,7};
    int arr2[] = {3,6,2,1};

    suma(arr1, arr2, 4);

    for(int i = 0; i < 4; i++)
        cout << arr1[i] << " ";
    cout << endl;

    char str[] = "anitalavalatina";

    int x = longitud(str);

    cout << palindrome(str, x) << endl;

    char str2[] = "hola";

    cout << palindrome(str2, 4) << endl;

    //char arr_car[][}] = {"holayadios"};

   // ordenar(arr_car, 10);

    //cout << arr_car;












}
