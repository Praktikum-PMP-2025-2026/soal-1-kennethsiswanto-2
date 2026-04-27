/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3
 *   Hari dan Tanggal    : Senin, 27 April 2025
 *   Nama (NIM)          : Kenneth Harrison Siswanto (13224032)
 *   Nama File           : Modul3.c
 *   Deskripsi           : Menerima input angka dengan jumlah tidak menentu, hitung banyaknya angka, sorting, lalu cari mediannya.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

int *arr = NULL;
int x;
int n = 0;
float median = 0;

    while(x != -1){ // input
        n++;
        scanf("%d", &x);
        arr = realloc(arr, n*(sizeof(int))); // menambah satu ruang array setiap tambahan input
        arr[n-1] = x;
    }

    // for(int i = 0; i < n-1; i++){ // TESTING INPUT
    // printf("%d ", arr[i]);
    // }

    for(int i = 0; i < n-2; i++){ // bubble sort ascending
        for(int j = 0; j < (n-2)-i; j++){ // pakai n-2 agar angka terakhir (-1) tidak ikut tersort
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // for(int i = 0; i < n-1; i++){ // TESTING SORTING
    // printf("%d ", arr[i]);
    // }

    if((n-1) % 2 == 0){
        median = (arr[((n-1)/2)-1]+arr[((n-1)/2)])/2; // median genap
    } else {
        median = arr[((n-1)/2)]; // median ganjil
    }


    // OUTPUT
    printf("COUNT %d", n-1);
    
    printf(" SORTED");
    for(int i = 0; i < n-1; i++){ 
    printf(" %d", arr[i]);
    }

    printf(" MEDIAN %.2f", median);


    return 0;

}
