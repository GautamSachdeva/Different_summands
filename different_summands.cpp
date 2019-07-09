#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n){
  vector<int> summands;
  int index = 1;
  int capacity = n;
  for(int i = 1 ; i <= n; i++){
  	int difference = capacity - i;
  	if(difference > i || difference == 0){
  		summands.push_back(i);
  		capacity = capacity - i;
  		if(difference == 0){
  			break;
		  }
	  }
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
