  #include<iostream>
  #include <vector>
  #include <string>
  #include <sstream>
  using namespace std;
  
  int getQuadrant(int x, int y) {
      if (x == 0 || y == 0) return 0;
      if (x > 0 && y > 0) return 1;
      if (x < 0 && y > 0) return 2;
      if (x < 0 && y < 0) return 3;
      return 4;
  }
  
 int getToll(int quadrant) {
      switch (quadrant) {
          case 1: return 1;
          case 2: return 2;
          case 3: return 3;
          case 4: return 4;
          default: return 0;
      }
  }
  
  int main() {
    //   vector<string> commands = {"F1","TL","F2","TL","F4","TL","F4","TL","F3","TL","F5"};
    vector<string> commands = {"TL","F2","TL","F2","TR","TR","F4"};
      int x = 0, y = 0;
      int dx = 1, dy = 0;
      int totalToll = 0;
      for (const string& cmd : commands) {
          if (cmd == "TL") {
              int tmp = dx;
              dx = -dy;
              dy = tmp;
          } else if (cmd == "TR") {
              int tmp = dx;
              dx = dy;
              dy = -tmp;
          } else {
              int steps = stoi(cmd.substr(1));
              for (int s = 0; s < steps; s++) {
                  int prevQ = getQuadrant(x, y);
                  x += dx;
                  y += dy;
                  int currQ = getQuadrant(x, y);
                  if (currQ != 0 && currQ != prevQ) {
                      totalToll += getToll(currQ);
                  }
              }
          }
      }
      cout << "Toll Amount: " << totalToll << endl;
      cout << "Position: " << x << " " << y << endl;
      return 0;
  }
