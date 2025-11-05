# include <stdio.h>
# define MAX_N 16

// 함수 선언
void adc_to_voltage(int adc[], double V[], double Vref, int N);
void voltage_to_distance(double V[], double distance[], double k,int N);

int main(void){
    int N;
    int adc[MAX_N];
    double Vref, k;
    double V[MAX_N];
    double distance[MAX_N];

    printf("N =\n");
    scanf("%d", &N);

    printf("adc =\n");
    for (int i=0; i<N; i++){
        scanf("%d", &adc[i]);
    }

    printf("Vref =\n");
    scanf("%lf", &Vref);

    printf("k =\n");
    scanf("%lf", &k);

    adc_to_voltage(adc,V,Vref,N);
    voltage_to_distance(V, distance, k, N);

 
    printf("\nADC      ->");
    for (int i=0; i<N; i++){
        printf("%6d", adc[i]);
        
    }
    printf("\n전압(V)  ->");
    for (int i=0; i<N; i++){
        printf("%6.2f", V[i]);
        
    }
    printf("\n거리(cm) ->");
    for (int i=0; i<N; i++){
        printf("%6.2f", distance[i]);
          
    }
    return 0;
}

//함수 정의
void adc_to_voltage(int adc[], double V[], double Vref, int N){

    // 전압 변환식
   
    for (int i=0; i<N; i++){
        V[i] = (double)adc[i] / 1023 * Vref;
        if (V[i] < 0.01) V[i] = 0.01;       // 0 나눗셈 방지용 최소 전압
    }
}


void voltage_to_distance(double V[], double distance[], double k, int N){

    // 거리 변환식
    for (int i=0; i<N; i++){
        distance[i] = k / V[i];
    }

}