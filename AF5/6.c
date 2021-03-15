int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    if (a == b) {
    resultado = a + b;
    }

    else {
        if ( a < b ) {
            resultado = b - a;
        }

        else {
            resultado = a - b;
        }
    }
    printf ("%d\n", resultado);
    return 0;
}