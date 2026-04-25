// Car Toll Collector
// Simulate car movement on grid, tracking direction and toll on axis-to-quadrant transitions.
// For a car that starts-at (0, 0) facing +X (right) on an infinite grid. The following commands are allowed:
// TL → turn left (90")
// TR → turn right (90")
// Fn → move forward n steps
// Toll criteria:
// Quadrant entry costs when moving between quadrants/ from axisto quadrants:
// Quadrant 1: (+,+) → $ 1
// Quadrant 2: (-,+) → $ 2
// Quadrant 3: (-,-)→ $ 3
// Quadrant 4: (+,-) → $ 4 No toll for: moving on axis
// staying within a quadrant during movement • moving from quadrant → axis
// Re-entering a quadrant from an axis charges again.
// Input
// ["command_1", "command_2",.. "command _N"]
// Output:
// Toll Amount: total toll amount
// Position: Final x, final y
// Example:
// Input:
// ["F1", "TL", "F2", "TL", "F4", "TL", "F4", "TL", "F3", "TL", "F5"]
// Output:
// Toll Amount: 6
// Position: 03
// Explanation:
// F1 : (0,0) → (1,0) : axis : no toll
// • TL: new direction: UP
// • F2: (1,0) → (1,2) : axis → Q1: + $ 1
// • TL: new direction: LEFT
// • F4 : (1,2) → (-3,2) : Q1 → axis → Q2: + $ 2
// • TL: new direction: DOWN
// F4 : (-3,2) → (-3,-2) : Q2 → axis → Q3 : + $ 3
// • TL: new direction: RIGHT
// • F3: (-3,-2) → (0,-2) : Q3 → axis : no toll
// • TL: new direction: UP
// • F5 (0,-2) → (0,3) : axis : no toll

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
