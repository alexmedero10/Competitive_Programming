int c = 0;
while(n){
  c++;
  n>>=1;
}
return c;

int popCount(int n){
  int c = 0;
  while(n){
    c++;
    n&=n-1;
  }                            }
  return c;
}

__builtin_popcount(n);   //int
__builtin_popcountl(n);  //long
__builtin_popcountll(n); //long long
