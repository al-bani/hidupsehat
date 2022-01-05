 #include <stdio.h>

int main(){
    char asi;
    int air,bb;
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
    
    return 0;
}