// NAMA		: Muhammad Fawwaz Razani
// NRP		: 5026221079
// Jurusan	: Sistem Informasi

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int distance)
{
    v0 = sqrt( (GRAVITASI * distance) / sin(2*SUDUT));
    return v0;
}

tipe_data speed_dgn_loss(tipe_data variabel)
{
    if ( v0 >= 1 && v0 <= 10 ){
        vt = v0 + 1;
    }
    else if ( v0 >= 11 && v0 <= 20){
        vt = v0 + 3;
    }
    else if ( v0 >= 21 && v0 <= 30){
        vt = v0 +5;
    }
  	return v0;
}

int main() {
    int N;
    int jarak = 1;
    /* tulis kode utama kalian disini */
  
  	/* input adalah kecepatan tangensial maksimum roller */
  	std::cin >> N;
    
    while (jarak <= N){
        jarak++;
    }
    std::cout << mencari_V0(62);
  	//std::cout << jarak << " " << kecepatan tangensial << std::endl;
    return 0;
}