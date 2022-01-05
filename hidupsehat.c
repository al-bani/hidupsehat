#include <stdio.h>
#include <math.h>

    int bbideal(float tb, int bb, int kelamin);
    int keb_cair(int bb);
    int bmr(int bb, float tb, int umur, int kelamin);
    void quest(int *fitur, int *hubung, int *kelamin, int *umur, int *bb, float *tb);

int main(){
    int fitur, hubung, kelamin, umur,bb;
    float tb;

    quest(&fitur, &hubung, &kelamin, &umur, &bb, &tb);   

        switch (fitur){
        case 1:
            hubung = bmr(bb,tb,umur, kelamin);
            break;
        case 2:
            hubung = keb_cair(bb);
            break;
        case 3:
            hubung = bbideal(tb,bb,kelamin);
            break;
        }

    return 0;
}

int bbideal(float tb, int bb, int kelamin){
    int hubung, hasil, air;
    char asi;

        tb = tb*tb;
        tb = tb/10000;

        hasil = bb/tb;
        
    if (kelamin == 1){
        if (hasil < 18){
            printf("anda kurus");
        }else
        if (hasil >= 18 && hasil < 25){
            printf("anda Normal");
        }else
        if (hasil >= 25){
            printf("anda Gemuk");
        }
    }else
    if (kelamin == 2){
        if (hasil < 17){
            printf("anda kurus");
        }else
        if (hasil >= 17 && hasil < 23){
            printf("anda normal");
        }else
        if (hasil >= 23){
            printf("anda Gemuk");
        }
    }

    printf(", skor IMT anda : %d", hasil);
        
    return hubung;
}

int keb_cair(int bb){
    char asi;
    int air, hubung;
    float liter;

        printf("Masih dengan minum Asi ? y/n : ");    scanf("%s", &asi);

        bb = 70;

        if (asi == 'y'){
            air = ((30 * bb) / 2);
        } else
        if (asi == 'n'){
            air = 30 * bb; 
        }

        printf("kebutuhan air putih anda sebanyak : %d ml, ", air); 
        
        liter = (float)air/1000;
        printf("atau : %.1f L", liter);
    
    return hubung;
}

int bmr(int bb, float tb, int umur, int kelamin){
    float hasil;
    int olahraga, hubung;

    if (kelamin == 1){

        hasil = 88.362 + (13.397 * bb) + (4.799 * tb) - (5.677 * umur);
        printf("BMR anda : %.0f", hasil);

        printf("\n1 : Hampir tidak pernah berolahraga\n2 : Jarang berolahraga\n3 : Sering berolahraga atau beraktivitas fisik berat\n");
        printf("Masukkan intensitas olahraga anda : ");
        scanf("%d", &olahraga);

        if (olahraga == 1){
            hasil *= 1.2;
        } else
        if (olahraga == 2){
            hasil *= 1.3;
        } else
        if (olahraga == 3){
            hasil *= 1.4;
        }

    } else
    if (kelamin == 2){
        hasil = 447.593 + (9.247 * bb) + (3.098  * tb) - (4.330 * umur);
        printf("BMR anda : %.0f", hasil);

        printf("\n1 : Hampir tidak pernah berolahraga\n2 : Jarang berolahraga\n3 : Sering berolahraga atau beraktivitas fisik berat\n");
        printf("Masukkan intensitas olahraga anda : ");
        scanf("%d", &olahraga);

        if (olahraga == 1){
            hasil *= 1.2;
        } else
        if (olahraga == 2){
            hasil *= 1.3;
        } else
        if (olahraga == 3){
            hasil *= 1.4;
        }

    }

    printf("kabutuhan kalori anda : %0.f Kkal perhari", hasil);

    return hubung;
}

void quest(int *fitur, int *hubung, int *kelamin, int *umur, int *bb, float *tb){
  
    printf("1 : Pria\n2 : wanita\npilih gender anda : ");
    scanf("%d", kelamin);
    
    printf("\n1 : Menghitung Kebutuhan Kalori anda\n2 : Menghitung Kebutuhan Cairan untuk tubuh anda\n3 : Menghitung Berat Badan Ideal\nMasukkan jawabannya : ");
    scanf("%d", fitur);

    printf("\nBerapa tinggi Badanmu : ");
    scanf("%f", tb);

    printf("\nBerapa Berat Badanmu : ");
    scanf("%d", bb);

    printf("\nBerapa usiamu : ");
    scanf("%d", umur);
}