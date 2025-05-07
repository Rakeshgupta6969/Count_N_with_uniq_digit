
class Solution {
    public:
        int countNumbersWithUniqueDigits(int n) {
               
    
    
               // here we apply  the mathmatical logic on the basis of the non unique;
               
               if(n == 0) return 1;
             
                 int result = 10;
                 int AvaiD = 9;
                 int UniqueD = 9;
    
                 for(int  i =2; i<=n; i++){
                    UniqueD *= AvaiD;
                    result += UniqueD;
    
                    AvaiD--;
                 }
    
            
    
    
         return result;
    
         
        }
    };
    