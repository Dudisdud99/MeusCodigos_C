#include <stdio.h>

int veriSaldo(int saldo){
    printf("\nSeu saldo e: %d\n",saldo);
    acoes(saldo);
}

int dep(int saldo){
    int novo=0;
    printf("\nDeseja depositar quanto: ");
    scanf("%d",&novo);
    saldo = saldo+novo;
    acoes(saldo);
}

int saque(int saldo){
    int novo=0;
    printf("\nDeseja sacar quanto: ");
    scanf("%d",&novo);
    saldo = saldo-novo;
    acoes(saldo);
}

int acoes(int saldo){
    int acao;
    printf("\nDigite a operacao que vc deseja fazer: \n");
    printf("1-verificar saldo\n2-deposito\n3-saque\n4-sair\n");
    printf("Sua acao: ");
    scanf("%d",&acao);
    
    if(acao==1){
        veriSaldo(saldo);
    }
    else if(acao==2){
        dep(saldo);
    }
    else if(acao==3){
        saque(saldo);
    }
    else if(acao==4){
        continuar();
    }
}

int main2() {
    int saldo;
    printf("Digite seu saldo inicial: ");
    scanf("%d",&saldo);
    acoes(saldo);
}