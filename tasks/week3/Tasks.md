﻿# Week 3 task From Google interviews

## 1>
Дана строка из нулей и единиц, найти все такие пары 0 и 1, что 0 левее чем 1. (O(n) по времени, O(1) по памяти)
Пример:
Вход: 10000101 
Выход: 9 

## 2>
Дан массив точек, точка - это пара целочисленных координат в двумерном пространстве. Точки не повторяются, найти количество прямоугольников, у которых стороны параллельны осям координат, которые можно построить на этих точках.

## 3>
Такая же задача как (2), но теперь прямоугольники могут быть любые.
  
## 4>  
Даны две строки, составить третью, такую что в ней есть символы, которые есть в первой и их нет во второй.(O(n) по времени, O(n) по памяти)  
Вход: string s1 = "29LsAAr37g4", s2 = "84fffa61AF3hL11"  
Выход: 29sr7g  
Вход: string s1 = "aaaaaa", s2 = "bbbbbba"  
Выход: -1  
Вход: string s1 = "aaaaaa", s2 = "bbbbbb"  
Выход: aaaaaa
  
## 5>  
Такая же задача как (4), но теперь обе входные строки изначально отсортированы (O(n) по времени, O(1) по памяти)