
  int remtic = 0;
  if (n % m != 0)
  {
    remtic = n % m;
  }
  if (price_oneticket <= a)
  {
    sum = remtic * a + (mticket * b);
  }
  else
  {
    sum = n * a;
  }
  cout << sum;