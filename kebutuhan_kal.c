#include <stdio.h>

int main(){

        float hasil;
        int tb,bb,umur,olahraga;

        tb = 170;
        bb = 70;
        umur = 18;

        hasil = (88.4 + 13.4 * bb) + (4.8 * tb) - (5.68 * umur);
        printf("BMR anda : %.0f", hasil);

        printf("\n1 : Hampir tidak pernah berolahraga\n2 : Jarang berolahraga\n3 : Sering berolahraga atau beraktivitas fisik berat\n");
        printf("Masukkan intensitas olahraga anda : ");
        scanf("%d", &olahraga);

        if (olahraga == 1){
            hasil *=1.2;
            printf("kabutuhan kalori anda : %0.f Kkal perhari", hasil);
        } else
        if (olahraga == 2){
            hasil *= 1.3;
            printf("kabutuhan kalori anda : %.0f Kkal perhari", hasil);
        } else
        if (olahraga == 3){
            hasil *= 1.4;
            printf("kabutuhan kalori anda : %0.f Kkal perhari", hasil);
        }
    
    return 0;
}