#include <cstdlib>
#include <iostream>

int main()
{
  int magicSquare[3][3], minTotalCostOfConverting = 30, allPossibleMagicSquares[8][3][3] = {{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
                                                                                            {{6, 1, 8}, {7, 5, 3}, {2, 9 ,4}},
                                                                                            {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
                                                                                            {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
                                                                                            {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
                                                                                            {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
                                                                                            {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
                                                                                            {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      std::cin >> magicSquare[i][j];
  }
  for (int i = 0; i < 8; i++)
  {
    int totalCostOfConvertingMatrixToMagicSquare = 0;
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        if (magicSquare[j][k] != allPossibleMagicSquares[i][j][k])
          totalCostOfConvertingMatrixToMagicSquare += std::abs(magicSquare[j][k] - allPossibleMagicSquares[i][j][k]);
      }
    }
    if (minTotalCostOfConverting > totalCostOfConvertingMatrixToMagicSquare)
      minTotalCostOfConverting = totalCostOfConvertingMatrixToMagicSquare;
  }
  std::cout << minTotalCostOfConverting;
}