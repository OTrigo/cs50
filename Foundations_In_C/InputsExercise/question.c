#include <stdio.h>
#include <cs50.h>

void answer(int n1, int n2){
	printf("%d \n", n1+n2);
}

int main(void){
		int n1 = get_int("Qual é o primeiro número?");

    int n2 = get_int("Qual é o segundo número?");

    answer(n1, n2);
}