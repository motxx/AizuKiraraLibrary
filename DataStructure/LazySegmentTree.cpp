// Verified: AOJ2644 Longest Match
enum query_type { min_query, max_query };

template<class T> struct segtree {
  int N;
  vector<T> dat, sum;
  function<T(T, T)> func;
  T ngvalue;

  void init(int n, function<T(T, T)> const& f, T ng) {
    N = 1;
    while(N < n) N <<= 1;
    dat.assign(2 * N - 1, 0);
    sum.assign(2 * N - 1, 0);
    func = f;
    ngvalue = ng;
  }

  segtree(int n, query_type qtype) {
    if(qtype == min_query) {
      init(n, [](T a, T b){return min(a, b);}, numeric_limits<T>::max());
    }
    else if(qtype == max_query) {
      init(n, [](T a, T b){return max(a, b);}, numeric_limits<T>::min());
    }
    else {
      runtime_error("no matching query type");
    }
  }

  void update(int i, T x) {
    add(i, i + 1, x);
  }

  void add(int a, int b, T x) {
    add(a, b, x, 0, 0, N);
  }

  T add(int a, int b, T x, int k, int l, int r) {
    if(b <= l || r <= a) return dat[k];
    if(a <= l && r <= b) {
      sum[k] += x;
      return dat[k] += x;
    }
    int m = (l + r) / 2;
    return dat[k] = func(add(a, b, x, 2 * k + 1, l, m), add(a, b, x, 2 * k + 2, m, r)) + sum[k];
  }

  T operator()(int a, int b) {
    return query(a, b, 0, 0, N);
  }

  T query(int a, int b, int k, int l, int r) {
    if(b <= l || r <= a) return ngvalue;
    if(a <= l && r <= b) return dat[k];
    int m = (l + r) / 2;
    return func(query(a, b, 2 * k + 1, l, m), query(a, b, 2 * k + 2, m, r)) + sum[k];
  }
};