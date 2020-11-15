int binarySearch(vector<int> v, int target){
  int l = 0, r = vector.size()-1;
  while(l<=r){
    int m = l+(r-l)/2;
    if(v[m] == target) return m;
    else if(v[m] < target) l = l+1;
    else r = r-1;
  }
  return -1;
}

int lowerBound(vector<int> &v, int target){
  int l = 0, r = v.size()-1;
  while(l<=r){
    int m = l + (r-l)/2;
    if(v[m] >= target) r = m - 1;
    else if(v[m] < target) l = m + 1;
  }
  if(l >= v.size()) return -1;
  else return l;
}

int upperBound(vector<int> &v, int target){
  int l = 0, r = v.size()-1;
  while(l<=r){
    int m = l + (r-l)/2;
    if(v[m] > target) r = m - 1;
    else if(v[m] <= target) l = m + 1;
  }
  if(l >= v.size()) return -1;
  else return l;
}
