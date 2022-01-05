#include <stdio.h>
#include <math.h>

int main(){

        float selisih, hasil, tb;
        int bb;

        scanf("%f", &tb);
        scanf("%d",&bb);

        tb = tb*tb;
        tb = tb/10000;

        hasil = bb/tb;

        if (hasil < 18){
           printf("Nilai IMT anda : %f", round(hasil));
           printf("anda kurus");
        }else
        if (hasil >= 18 && hasil < 25){
           printf("Nilai IMT anda : %f", round(hasil));
           printf("anda normal");
        }else
        if (hasil >= 25){
           printf("Nilai IMT anda : %f", round(hasil));
           printf("anda gemuk");
        }

return 0;
}