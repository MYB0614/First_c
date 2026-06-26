//Ex.2 섭씨to화씨 or 화씨to섭씨

#include <stdio.h>


double CelToFah (double Cel){
    double Fah;
    Fah = 1.8 * Cel + 32;
    
    return Fah; // 섭씨 => 화씨 변경하여 반환
}

double FahToCel (double Fah){
    int Cel;
    Cel = (Fah-32)/1.8;
    
    return Cel; // 화씨 => 섭씨 변경하여 반환
}

int main(void){
    int type;
    double temp;
    
    printf("타입\n1 : 섭씨 => 화씨\n2 : 화씨 => 섭씨\n");
    scanf("%d",&type);
    
    printf("\n온도는?");
    scanf("%lf",&temp);
    
    switch (type){
        case 1:
            temp = CelToFah(temp);
            printf("%lf(섭씨 -> 화씨로 변경함)",temp);
            break;
        case 2:
            temp = FahToCel(temp);
            printf("%lf(화씨 -> 섭씨로 변경함)",temp);
            break;
        default:
            printf("type value error!!");
    }
    
}
