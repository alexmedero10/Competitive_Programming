//NO DIRIGIDO
vector<bool> visitado;
bool dfs(int u){
  visitados[u] = true;
  for(auto v: adj[u]){
    if(visitados[v])
      return true;
    if(dfs(v)) return true;
  }
  return false; 
}

//DIRIGIDO
vector<int> estado;
bool dfs(int u){
  estado[u] = 1;
  for(auto v: adj[u]){
    if(estado[v] == 2)
      continue;
    if(estado[v] == 1)
    return true;
    if(dfs(v)) return true;
  }
  estado[u] = 2;
  return false;
}
