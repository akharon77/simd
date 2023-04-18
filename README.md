# Цель работы
Изучить способы оптимизации программы на примере вычисления множества Мандельброта

# Способы оптимизации
В качестве главного средства оптимизации я использовал AVX инструкции, конкретно набор AVX512. Идея заключается в том, чтобы рассчитывать сразу несколько пикселей за раз. 
Одно из направлений векторизации заключается в векторизации условных ветвлений. Для этого используются маски, которые позволяют вычисляющим инструкциям не трогать пиксели, расчёт для которых был закончен. Чтобы не использовать ассемблерные вставки и позволить компилятору оптимизировать код, я использовал SIMD команды


# Ход работы
1. Написал наивную реализацю
2. Написал оптимизированную реализацию
3. Воспользовался инструментом godbolt.org
4. Сравнил фрагменты кода на Си и инструкции, которые получаются на выходе компилятор
5. Рассмотрел наивную реализацию, которая рассчитывает каждый пиксель отдельно
6. Рассмотрел векторизованную версию с использованием SIMD команд
7. Сделал вывод

# Результаты замеров
| Версия                 | `-O0` | `-O2` |
|------------------------|-------|-------|
| Наивная                | 11.83 | 46.39 |
|------------------------|-------|-------|
|                        | 11.77 | 40.81 |
|------------------------|-------|-------|
|                        | 12.19 | 43.23 |
|------------------------|-------|-------|
|                        | 11.57 | 45.09 |
|------------------------|-------|-------|
|                        | 11.73 | 42.78 |
|------------------------|-------|-------|
| Среднее                | 11.82 | 43.66 |
|------------------------|-------|-------|
| Стандартное отклонение | 0.23  | 2.16  |
|------------------------|-------|-------|

# Вывод

# Скриншоты

# Горячие клавишы
## Смещение картинки
- Arrow Up
- Arrow Down
- Arrow Left
- Arrow Right

## Масштабирование
- Numpad Plus
- Numpad Minus

