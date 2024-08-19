#include <stdio.h>

void levantamentoElevadores(){
    int AM = 0, AV = 0, AN = 0;
    int BM = 0, BV = 0, BN = 0;
    int CM = 0, CV = 0, CN = 0;
    char elevador, periodo;

    for (int i = 0; i < 3; i++) {
        printf("Informe o elevador mais utilizado (A, B, C) e o período (M, V, N): ");
        scanf(" %c %c", &elevador, &periodo);

        if (elevador == 'A') {
            switch (periodo) {
                case 'M': AM++; break;
                case 'V': AV++; break;
                case 'N': AN++; break;
            }
        } else if (elevador == 'B') {
            switch (periodo) {
                case 'M': BM++; break;
                case 'V': BV++; break;
                case 'N': BN++; break;
            }
        } else if (elevador == 'C') {
            switch (periodo) {
                case 'M': CM++; break;
                case 'V': CV++; break;
                case 'N': CN++; break;
            }
        }
    }

    // Elevador mais frequentado
    int totalA = AM + AV + AN;
    int totalB = BM + BV + BN;
    int totalC = CM + CV + CN;

    char elevadorMaisFrequentado;
    int maiorTotal;

    if (totalA > totalB && totalA > totalC) {
        elevadorMaisFrequentado = 'A';
        maiorTotal = totalA;
    } else if (totalB > totalA && totalB > totalC) {
        elevadorMaisFrequentado = 'B';
        maiorTotal = totalB;
    } else {
        elevadorMaisFrequentado = 'C';
        maiorTotal = totalC;
    }

    // Período mais frequentado para o elevador mais utilizado
    int maiorPeriodo;
    char periodoMaisFrequentado;

    if (elevadorMaisFrequentado == 'A') {
        if (AM > AV && AM > AN) {
            maiorPeriodo = AM;
            periodoMaisFrequentado = 'M';
        } else if (AV > AM && AV > AN) {
            maiorPeriodo = AV;
            periodoMaisFrequentado = 'V';
        } else {
            maiorPeriodo = AN;
            periodoMaisFrequentado = 'N';
        }
    } else if (elevadorMaisFrequentado == 'B') {
        if (BM > BV && BM > BN) {
            maiorPeriodo = BM;
            periodoMaisFrequentado = 'M';
        } else if (BV > BM && BV > BN) {
            maiorPeriodo = BV;
            periodoMaisFrequentado = 'V';
        } else {
            maiorPeriodo = BN;
            periodoMaisFrequentado = 'N';
        }
    } else {
        if (CM > CV && CM > CN) {
            maiorPeriodo = CM;
            periodoMaisFrequentado = 'M';
        } else if (CV > CM && CV > CN) {
            maiorPeriodo = CV;
            periodoMaisFrequentado = 'V';
        } else {
            maiorPeriodo = CN;
            periodoMaisFrequentado = 'N';
        }
    }

    // Período mais frequentado entre todos
    int totalM = AM + BM + CM;
    int totalV = AV + BV + CV;
    int totalN = AN + BN + CN;

    int maiorPeriodoTotal;
    char periodoMaisFrequentadoGeral;
    char elevadorMaisUtilizadoNoPeriodo;

    if (totalM > totalV && totalM > totalN) {
        maiorPeriodoTotal = totalM;
        periodoMaisFrequentadoGeral = 'M';

        if (AM >= BM && AM >= CM) {
            elevadorMaisUtilizadoNoPeriodo = 'A';
        } else if (BM >= AM && BM >= CM) {
            elevadorMaisUtilizadoNoPeriodo = 'B';
        } else {
            elevadorMaisUtilizadoNoPeriodo = 'C';
        }
    } else if (totalV > totalM && totalV > totalN) {
        maiorPeriodoTotal = totalV;
        periodoMaisFrequentadoGeral = 'V';

        if (AV >= BV && AV >= CV) {
            elevadorMaisUtilizadoNoPeriodo = 'A';
        } else if (BV >= AV && BV >= CV) {
            elevadorMaisUtilizadoNoPeriodo = 'B';
        } else {
            elevadorMaisUtilizadoNoPeriodo = 'C';
        }
    } else {
        maiorPeriodoTotal = totalN;
        periodoMaisFrequentadoGeral = 'N';

        if (AN >= BN && AN >= CN) {
            elevadorMaisUtilizadoNoPeriodo = 'A';
        } else if (BN >= AN && BN >= CN) {
            elevadorMaisUtilizadoNoPeriodo = 'B';
        } else {
            elevadorMaisUtilizadoNoPeriodo = 'C';
        }
    }

    // Elevador menos frequentado
    char elevadorMenosFrequentado;
    int menorTotal;

    if (totalA < totalB && totalA < totalC) {
        elevadorMenosFrequentado = 'A';
        menorTotal = totalA;
    } else if (totalB < totalA && totalB < totalC) {
        elevadorMenosFrequentado = 'B';
        menorTotal = totalB;
    } else {
        elevadorMenosFrequentado = 'C';
        menorTotal = totalC;
    }

    float diferencaPercentual = ((float)(maiorTotal - menorTotal) / maiorTotal) * 100;

    printf("O elevador mais frequentado é o %c com %d utilizações.\n", elevadorMaisFrequentado, maiorTotal);
    printf("O período mais frequentado para o elevador %c é %c com %d utilizações.\n", elevadorMaisFrequentado, periodoMaisFrequentado, maiorPeriodo);
    printf("\n");
    printf("O período mais frequentado entre todos é %c com %d utilizações.\n", periodoMaisFrequentadoGeral, maiorPeriodoTotal);
    printf("O elevador mais utilizado durante esse período é o elevador %c.\n", elevadorMaisUtilizadoNoPeriodo);
    printf("\n");
    printf("A diferença percentual entre o elevador mais utilizado e o menos utilizado é de %.2f%%.\n", diferencaPercentual);
}

int main() {
    
    levantamentoElevadores();
    return 0;
}
