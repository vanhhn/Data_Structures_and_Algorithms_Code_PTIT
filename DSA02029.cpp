#include <iostream>
using namespace std;

void moveDisk(int disk, char source, char destination)
{
  cout << source << " -> " << destination << endl;
}

void hanoi(int N, char source, char auxiliary, char destination)
{
  if (N == 1)
  {
    moveDisk(N, source, destination);
  }
  else
  {
    hanoi(N - 1, source, destination, auxiliary);
    moveDisk(N, source, destination);
    hanoi(N - 1, auxiliary, source, destination);
  }
}

int main()
{
  int N;
  cin >> N;

  hanoi(N, 'A', 'B', 'C');

  return 0;
}