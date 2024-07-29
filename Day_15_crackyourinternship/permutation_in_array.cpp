sort(a, a + n);
        sort(b, b + n, greater<int>());

        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] < k) {
                return 0;
            }
        }
        return 1;