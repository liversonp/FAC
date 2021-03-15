int main(){
    int n, valor;
    scanf ("%d", &n);
    resultado = 0;
    for (int i = 0; i < n; i++) {
    scanf ("%d", &valor);
    resultado += valor;
    }
    printf ("%d\n", resultado);
    return 0;
}