int summa_n (long long int t) {
    long long int counter = 0;
    for (long long int i = 1; i <= t; i++) {
        counter += i;
    }
    cout << "Я знаю, что сумма чисел от 1 до " << t << " равна " << counter << endl;
    return 0;
}
