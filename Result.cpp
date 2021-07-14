int solution(int number) 
{
  std::vector<int> arr;
  if(number <= 0) {return 0;}
  for(int i = 1; i < number; i++){
    if(i % 3 == 0){
      arr.push_back(i);
    }
    else if(i % 5 ==0){
      arr.push_back(i);
    }
  }
  int result = 0;
  for(int i=0; i < arr.size(); i++){
    result += arr[i];
  }
  return result;
}
