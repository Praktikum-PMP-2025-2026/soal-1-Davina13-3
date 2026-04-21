/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 (Data Manipulation and External Files)
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Davina Alya Shakira (13224081)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program untuk memulihkan naskah kuno yang rusak dengan menghapus simbol kurung agar struktur teks kembali valid, tanpa mengubah urutan karakternya.
 */

#include <stdio.h>
#include <string.h>

int main (){
    char str[100];
    printf("");
    gets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Menghapus newline yang dihasilkan oleh fgets

    char result[100];
    int j = 0;
    int balance = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            balance++;
            result[j++] = str[i];
        } else if (str[i] == ')') {
            if (balance > 0) {
                balance--;
                result[j++] = str[i];
            }
        } else {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

    printf("%s\n", result);
    return 0;
}
