#include <vector>
#include <iostream>

using namespace std;

class DeleteAdjacentElements
{
private:
  int findMin(vector<int> &);
  void print(const vector<int> &);

public:
  void input(vector<int> &);
  void deleteAdjacentElements(vector<int> &);
};

int DeleteAdjacentElements::findMin(vector<int> &elements)
{
  int minElement = elements[0];
  int minIndex = 0;
  int n = elements.size();

  for (int i = 1; i < n; i++)
  {
    if (elements[i] < minElement)
    {
      minElement = elements[i];
      minIndex = i;
    }
  }

  return minIndex;
}

void DeleteAdjacentElements::input(vector<int> &elements)
{
  for (int &element : elements)
  {
    cin >> element;
  }
}

void DeleteAdjacentElements::print(const vector<int> &elements)
{
  for (const int &element : elements)
  {
    cout << element << " ";
  }
  cout << endl;
}

void DeleteAdjacentElements::deleteAdjacentElements(vector<int> &elements)
{
  if (elements.size() == 1)
  {
    print(elements);
  }
  else
  {
    int minIndex = findMin(elements);
    if (minIndex == 0)
    {
      elements.erase(elements.begin() + 1);
    }
    else if (minIndex == static_cast<int>(elements.size() - 1))
    {
      elements.erase(elements.end() - 2);
    }
    else
    {
      elements.erase(elements.begin() + minIndex - 1);
      elements.erase(elements.begin() + minIndex + 1);
    }

    if (!elements.empty())
    {
      print(elements);
      deleteAdjacentElements(elements);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> elements(n);

  DeleteAdjacentElements dA;
  dA.input(elements);
  dA.deleteAdjacentElements(elements);

  return 0;
}
