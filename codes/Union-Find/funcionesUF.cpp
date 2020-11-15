int find(int a){
  while(a != p[a])
    a = p[a];
  return a;
}

bool same(int a, int b){
  return find(a) == find(b);
}

bool join(int a, int b){
  int ra = find(a), rb = find(b);
  if(ra == rb)
    return false;
  p[ra] = rb;
  return true;
}

int find(int a){
  return a == p[a] ? a : p[a] = find(p[a]);
}

int join(int a, int b){
  int ra = find(a), rb = find(b);
  if(ra == rb)
    return false;
  if(rank[ra] > rank[rb])
    swap(ra, rb);
  if(rank[ra] == rank[rb])
    rank[rb]++;
  p[ra] = rb;
  return true;
}
