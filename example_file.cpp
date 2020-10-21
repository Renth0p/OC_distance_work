#include <iostream>
#include <ctime>
using namespace std;
int main() {
  int ans[20]; // создали массив для записи всех индексов
  int h = 0;
  int arr[20]; // создали массив на 20 эл-тов
  int key; // создали переменную в которой будет находиться ключ
  srand(time(NULL));

   for (int i = 0; i < 20; i++) {
     arr[i] = 1 + rand() % 20; // заполняем случайными числами
     cout << arr[i] << " "; // выведем все ячейки массива
     if (i == 9)
      cout << endl;
   }

   cout << endl << endl << "Введите ключ: "; cin >> key; // считываем ключ

   for (int i = 0; i < 20; i++) {
     if (arr[i] == key) // проверяем равен ли arr[i] ключу
      ans[h++] = i;
   }
   if (h != 0) { // проверяем были ли совпадения
    for (int i = 0; i < h; i++) {
      cout << "Ключ " << key << " находится в ячейке " << ans[i] << endl; // выводим все индексы
    }
   }
   else { cout << "Мы не нашли ключ " << key << " в массиве"; }
   return 0; 
}
