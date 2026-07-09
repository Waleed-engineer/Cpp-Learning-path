int print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << ":)" << endl;
            continue;
        }
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                cout << ":) ";
            }else {
                cout << ":( ";    
            }
        }
        cout << endl;
        
    }
    return 0;
}
