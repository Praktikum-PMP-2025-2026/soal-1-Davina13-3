/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 (Data Manipulation and External Files)
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Davina Alya Shakira (13224081)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program untuk memulihkan naskah kuno yang rusak dengan menghapus simbol kurung agar struktur teks kembali valid, tanpa mengubah urutan karakternya.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    int len = strlen(str);
    char result[100]; 
    int j = 0; 
    int b = 0; 

    for (int i = 0; i < len; i++) {
        if (str[i] == '(') {
            b++;
            result[j++] = str[i]; 
        } else if (str[i] == ')') {
            if (b > 0) { 
                b--;
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
