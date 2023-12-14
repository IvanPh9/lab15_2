#include <stdio.h>

// Функція для знаходження мінімального числа серед трьох
int findMin(int a, int b, int c) {
    int min = a;
    // Перевіряємо, чи b менше min
    if (b < min) {
        min = b;
    }
    // Перевіряємо, чи c менше min
    if (c < min) {
        min = c;
    }
    // Повертаємо мінімальне число
    return min;
}

int main() {
    int num1, num2, num3;
    // Вивід повідомлення для користувача
    printf("Input three numbers:\n");
    // Зчитування трьох чисел з клавіатури
    scanf_s("%d", &num1);
    scanf_s("%d", &num2);
    scanf_s("%d", &num3);
    // Виклик функції для знаходження мінімуму
    int result = findMin(num1, num2, num3);
    // Вивід результату
    printf("Min = %d\n", result);

    return 0;
}
