class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
   int answer = 0;
   for (int i = 0; i < n; i++)
   {
       for (int j = i + 1; j < n; j++)
       {
           answer = max(answer, prices[j] - prices[i]);
       }
   }
   return answer;
}
int main()
{
   vector<int> prices = {7, 1, 5, 3, 6, 4};
   cout << maxProfit(prices) << endl;
   return 0;
}
};