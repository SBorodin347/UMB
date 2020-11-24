int main(){
    //кол-во элементов в массиве
    int n;
    printf("zadaj n: ");
    scanf("%d", &n);
    int masiv[n];
    //инициализация элементов массива
    int i;
    for (i = 0; i<n; i++){
        printf("zadaj element masiva: ");
        scanf("%d", &masiv[i]);
    }
    //печатаем элементы массива в обратном порядке
    //n-1 = последний элемент
    //как только i станет 0 (первым элементом) цикл закончится
    for (i = n-1; i>=0; i--){
        printf("%d ", masiv[i]);
    }
    putchar('\n');
    
    return 0;
}
            
