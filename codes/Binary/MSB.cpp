int msb(int n){
  int c = 0;
  while(n){
    c++;
    n>>=1;
  }                              }
  return 1<<(c-1);
}

int msb(int n){
  return 1<<(sizeof(n)*8-__builtin_clz(n)-1);
}
