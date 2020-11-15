bool bfs(vector<vector<int>> v, int target){
  vvi visited(v.size(),vector<int>(v.size()));
  int movx[4] = {1,-1,0,0};
  int movy[4] = {0,0,1,-1};  
  queue<pair<int,int>> q;

  while(!q.empty()){
    pair<int,int> p = q.top()
    q.pop();
    for(int i = 0; i < 4 ; ++i){
      int x = p.first + movx[i];
      int y = p.second + movy[i];
      if(x>=0 and x<v.size() and y>=0 and y<v.size()){
          if(visited[x][y] == 0){
          if(v[x][y] == target)
          return true;
          else q.push(make_pair(x,y));
          visited[x][y] = 1;
        }
      } 
    }
  }
  return false;
}
