enum Face : int { Top=0, Front=1, Right=2, Left=3, Back=4, Bottom=5 };
class cube {
private:
  int f[6];
  unordered_map<int, string> name_;

public:  
  /*
            1(Top)
    4(Left) 2(Front) 3(Right) 5(Back)
            6(Bottom)
  */
  cube(){}
  cube(vector<int> const& vs){ assert(vs.size() == 6); for(int i=0; i<6; i++) f[i] = vs[i]; }
  cube(vector<string> const& vs) { assert(vs.size() == 6); for(int i=0; i<6; i++) f[i] = i, name_[i] = vs[i]; }
  void roll_z() { roll(1, 2, 4, 3); }
  void roll_y() { roll(0, 2, 5, 3); }
  void roll_x() { roll(0, 1, 5, 4); }
  void roll(int i, int j, int k, int l) {
    int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
  }

  const int& operator[] (int idx) const { return f[idx]; }
  const string& name(int idx) { return name_[f[idx]]; }

  void roll(int k) {
    if(k == 0) roll_y();
    if(k == 1) roll_x();
    if(k == 2) for(int i=0; i<3; i++) roll_y();
    if(k == 3) for(int i=0; i<3; i++) roll_x();
  }

  bool roll_top_front(int top, int front) {
    for(int k = 0; k < 6; (k & 1 ? roll_y() : roll_x()), k++)
      for(int i = 0; i < 4; roll_z(), ++i)
        if(top == f[Top] && front == f[Front]) return true;
    return false;
  }

  bool operator== (cube const& rhs) const {
    for(int i=0; i<6; i++)
      if(f[i] != rhs.f[i]) return false;
    return true;
  }

  bool isomorphic(cube rhs) const {
    for(int k = 0; k < 6; (k & 1 ? rhs.roll_y() : rhs.roll_x()), k++)
      for(int i = 0; i < 4; rhs.roll_z(), ++i)
        if(operator==(rhs)) return true;
    return false;
  }
};