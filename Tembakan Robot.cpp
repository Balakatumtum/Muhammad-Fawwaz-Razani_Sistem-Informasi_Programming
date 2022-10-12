// NAMA        : Muhammad Fawwaz Razani
// NRP        : 5026221079
// Jurusan    : Sistem Informasi

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int distance)
{
    float V0;
    V0 = sqrt(GRAVITASI * distance);
    return V0;
}

float Resulting_Vtangensial(float V0)
{
    float vt;
    if ( V0 >= 1 && V0 <= 10 ){
        vt = V0 + 1;
    }
    else if ( V0 >= 11 && V0 <= 20){
        vt = V0 + 3;
    }
    else if ( V0 >= 21 && V0 <= 30){
        vt = V0 + 5;
    }
      return vt;
}

int main() {
    int V_maks_tangensial;
    int jarak = 0;
    float kecepatan_tangensial;
    float V0;
    bool iter = true;
    
      std::cin >> V_maks_tangensial;
    
    while (iter){
        jarak++;
        V0 = mencari_V0(jarak);
        kecepatan_tangensial = Resulting_Vtangensial(V0);
        
        if (Resulting_Vtangensial(mencari_V0(jarak+1)) > V_maks_tangensial){
            iter = false;
        }
    }
      
      std::cout << jarak << " " << kecepatan_tangensial << std::endl;
    return 0;
}